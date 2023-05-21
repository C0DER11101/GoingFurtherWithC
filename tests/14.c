#include<stdio.h>
#include<math.h>

int main(void)
{
	double x=4.4;

	printf("round(%.2f) = %2.f\n", x, round(x));
	printf("ceil(%.2f) = %2.f\n", x, ceil(x));
	printf("floor(%.2f) = %2.f\n", x, floor(x));
	printf("trunc(%.2f) = %2.f\n", x, trunc(x));
	return 0;
}
