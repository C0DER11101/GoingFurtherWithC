#include<stdio.h>
#include<math.h>

int main(void)
{
	double x=4.4;
	double y=-4.59;

	printf("round(%.2f) = %2.f\n", x, round(x));
	printf("ceil(%.2f) = %2.f\n", x, ceil(x));
	printf("floor(%.2f) = %2.f\n", x, floor(x));
	printf("trunc(%.2f) = %2.f\n", x, trunc(x));

	printf("\nround(%.2f) = %2.f\n", y, round(y));
	printf("ceil(%.2f) = %2.f\n", y, ceil(y));
	printf("floor(%.2f) = %2.f\n", y, floor(y));
	printf("trunc(%.2f) = %2.f\n", y, trunc(y));
	return 0;
}
