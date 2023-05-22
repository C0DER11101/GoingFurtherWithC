#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

// creating more than one threads!!


/* SINGLE THREADED-PROGRAM */

void *computation(void*);
int main(void)
{
	pthread_t thread1; // we will use this to create and manage our thread!
	pthread_t thread2;
	long value1=100;
	long value2=500;

	computation(&value1);
	computation(&value2);
	/*
	pthread_create(&thread1, NULL, computation, &value1);
	pthread_create(&thread2, NULL, computation, &value2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	*/
	return 0;
}

void *computation(void*value)
{
	long sum=0;
	for(int i=0; i<1000000000; i++)
		sum+=*(long*)value;
	printf("Sum = %ld\n", sum);
	return NULL;
}
