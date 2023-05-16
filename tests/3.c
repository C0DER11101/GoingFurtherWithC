#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char*double_test="98.45";
	char*int_test="94";
	char*long_int_test="1231233235";

	/* convert string to double */
	double doubleNum=atof(double_test);
	/*--------------------------*/

	/* convert string to int */
	int intNum=atoi(int_test);
	/*-----------------------*/

	/* convert string to long int */
	long int longintNum=atol(long_int_test);
	/*----------------------------*/

	printf("\nResults:\n");

	printf("Double result: %.3lf\n", doubleNum);
	printf("Integer result: %d\n", intNum);
	printf("Long integer result: %ld\n", longintNum);

	return 0;
}
