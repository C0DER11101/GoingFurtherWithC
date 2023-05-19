#include<stdio.h>
#include<stdlib.h>

void cleanup();

int main(void)
{
	atexit(cleanup);
	printf("hello world!!\n");

	abort();
	
	return 0;
}

void cleanup()
{
	printf("\nCleaning up memory!!\n");
}
