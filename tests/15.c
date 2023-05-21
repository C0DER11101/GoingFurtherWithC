#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char*value=getenv("HOME");

	printf("Value in environment variable: %s\n", value);
	return 0;
}
