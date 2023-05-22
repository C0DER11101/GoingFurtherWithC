#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *computation(void*);
int main(void)
{
	pthread_t thread1; // we will use this to create and manage our thread!
	long value=100;
	pthread_create(&thread1, NULL, computation, &value);

	pthread_join(thread1, NULL);
	return 0;
}

void *computation(void*value)
{
	printf("Value = %ld\n", *(long*)value);
	return NULL;
}
