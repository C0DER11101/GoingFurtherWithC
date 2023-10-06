#include<stdio.h>
#include<pthread.h>

// for multiple threads

void* computation(void*);

int main(void){

	pthread_t thread1;
	pthread_t thread2;

	long value1=1;
	long value2=2;

	pthread_create(&thread1, NULL, computation, &value1);
	pthread_create(&thread2, NULL, computation, &value2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	return 0;
}

void* computation(void*arg){
	long sum=0;
	long*value=arg;

	for(long i=0; i<1000000000; i++)
		sum+=*value;

	return NULL;
}
