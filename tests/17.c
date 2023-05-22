#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *computation();
int main(void)
{
	pthread_t thread1; // we will use this to create and manage our thread!
	pthread_create(&thread1, NULL, computation, NULL);

	pthread_join(thread1, NULL);
	return 0;
}

void *computation()
{
	printf("\nComputation!\n");

	return NULL;
}
