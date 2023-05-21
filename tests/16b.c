#include<stdio.h>
#include<string.h>

int main(void)
{
	char data[]="qrstpax";

	char*pos=memchr(data, 'z', 7);

	if(pos==NULL)
		printf("\'z\' not in the character array!!\n");
	else
		printf("\'z\' found!!\n");
	return 0;
}
