#include<stdio.h>
#include<math.h>

int main(void)
{
	double numer=14.9;
	double denom=3;

	double result=fmod(numer, denom);

	printf("\nResult: %.3f\n", result);
	return 0;
}
