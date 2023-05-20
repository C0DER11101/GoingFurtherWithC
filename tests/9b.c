#include<stdio.h>
#include<string.h>

int main(void)
{
	char buffer[10];

	memset(buffer, 'a', 5*sizeof(char));
	memset(buffer+5, 'b', 5*sizeof(char));

	printf("buffer: %s\n", buffer);
	return 0;
}
