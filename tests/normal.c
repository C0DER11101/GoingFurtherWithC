#include<stdio.h>
#include<pthread.h>

void*computation(void*);

int main(void){

	long value1=1;
	long value2=2;

	computation(&value1);
	computation(&value2);
	return 0;
}

void*computation(void*value){
	long sum=0;
	long*arg=value;

	for(long i=0; i<1000000000; i++)
		sum+=*arg;

	return NULL;
}
