#include<stdio.h>
#include<unistd.h>

int main(void)
{
	printf("before\n");
	usleep(5000000);
	printf("after\n");
	return 0;
}
