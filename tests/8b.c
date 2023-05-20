#include<stdio.h>
#include<string.h>

int main(void)
{
	char src[]="abcdefghijklmnopqrstuvwxyz";
	char dest[27];

	memcpy(dest, src, 27*sizeof(char));

	printf("dest: %s\n", dest);

	char strMid[10];

	memcpy(strMid, src+8, 9*sizeof(char));

	printf("strMid: %s\n", strMid);

	return 0;
}
