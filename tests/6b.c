#include<stdio.h>
#include<assert.h>

int main(void)
{
	printf("\nLine 1\n");
	assert(2==3); // assertion fail!!
	printf("\nLine 3\n");
	return 0;
}

