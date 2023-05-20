#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num=10, den=3;

	div_t result=div(num, den);

	printf("\nQuotient of division: %d\n", result.quot);
	printf("\nRemainder of division: %d\n", result.rem);
	return 0;
}
