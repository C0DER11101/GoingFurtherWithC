#include<stdio.h>
#include<string.h>

int main(void)
{
	char src[]="abcdefghijklmnopqrstuvwxyz";
	char dest[27];

	memcpy(dest, src, 27*sizeof(char));

	printf("dest: %s\n", dest);
	return 0;
}
