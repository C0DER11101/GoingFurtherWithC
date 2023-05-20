#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	long num=12, den=5;

	ldiv_t result=ldiv(num, den);

	printf("Quotient: %ld\n", result.quot);
	printf("Remainder: %ld\n", result.rem);
	return 0;
}
