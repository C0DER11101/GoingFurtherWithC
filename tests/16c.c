#include<stdio.h>
#include<string.h>

int main(void)
{
	char data[]="qrstpax";

	char*pos=memchr(data, 'a', 5);

	if(pos==NULL)
		printf("\'a\' not in the character array!!\n");
	else
		printf("\'a\' found!!\n");
	return 0;
}
