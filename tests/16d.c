#include<stdio.h>
#include<string.h>

int main(void)
{
	char email[]="priyanuj123@gmail.com";

	char*domain=memchr(email, '@', strlen(email));

	if(domain==NULL)
		printf("\nDomain not found!!\n");
	else
		printf("\nDomain: %s\n", domain+1);
	return 0;
}
