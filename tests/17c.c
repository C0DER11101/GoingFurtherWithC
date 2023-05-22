#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

// creating more than one threads!!

void *computation(void*);
int main(void)
{
	pthread_t thread1; // we will use this to create and manage our thread!
	pthread_t thread2;
	long value1=100;
	long value2=500;
	pthread_create(&thread1, NULL, computation, &value1);
	pthread_create(&thread2, NULL, computation, &value2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	return 0;
}

void *computation(void*value)
{
	printf("Value = %ld\n", *(long*)value);
	return NULL;
}
