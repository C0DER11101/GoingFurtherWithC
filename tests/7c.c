#include<stdio.h>
#include<string.h>

int main(void)
{
	char source[]="priyanuj11101@gmail.com";
	char dest[20];
	for(int i=0; i<20; i++)
		dest[i]=' ';


	char*pos=memccpy(dest, source, '@', 20);
	*pos='\0';

	printf("%s", dest);
	return 0;
}
