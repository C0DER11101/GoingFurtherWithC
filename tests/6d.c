#define NDEBUG

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

void putStr(char*);

int main(void)
{
	char*string=malloc(10*sizeof(char));

	strcpy(string, "hello");

	char*bad_str=NULL;

	putStr(bad_str);

	free(string);
	return 0;
}

void putStr(char*string)
{
	printf("\nHere is the string: ");

	assert(string!=NULL);
	printf("%s\n", string);
}

