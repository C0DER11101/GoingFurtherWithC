#include<stdio.h>
#include<string.h>

int main(void)
{
	char data[]="qrstpax";

	char*pos=memchr(data, 't', 7);

	printf("String is: %s\n", pos);

	printf("pos[0] = %c\n", pos[0]);
	printf("pos[1] = %c\n", pos[1]);
	printf("pos[2] = %c\n", pos[2]);
	printf("pos[3] = %c\n", pos[3]);
	return 0;
}
