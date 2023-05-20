#include<stdio.h>
#include<string.h>

int main(void)
{
	char buffer[10];

	memset(buffer, 'a', 10*sizeof(char));

	printf("buffer: %s\n", buffer);
	return 0;
}
