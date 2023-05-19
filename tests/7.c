#include<stdio.h>
#include<string.h>

int main(void)
{
	char source[]="priyanuj11101@gmail.com";
	char dest[20];


	memccpy(dest, source, '@', 20);

	for(int i=0; i<20; i++)
		printf("dest[%d]: %c\n", i, dest[i]);
	return 0;
}
