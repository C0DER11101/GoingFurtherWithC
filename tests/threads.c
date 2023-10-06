#include<stdio.h>
#include<pthread.h>

// for a single thread!

void* computation(void*value);

int main(void){

	pthread_t thread1;   // this will be used to create and manage our thread

	long value=1;
	pthread_create(&thread1, NULL, computation, &value);     // the last argument passed to this function is the argument that computation() will take!

	pthread_join(thread1, NULL);      // join the created thread to the main thread once the it completes its execution!

	return 0;
}

void* computation(void*value){
	printf("Computation: %ld\n", *((long*)value));

	return NULL;
}
