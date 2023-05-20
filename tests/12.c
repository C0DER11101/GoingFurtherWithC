#include<stdio.h>
#include<math.h>

int main(void)
{
	double x=2.56;

	double frac=0.0, integral=0.0;

	frac=modf(x, &integral); // this returns the fractional part and sets the variable 'integral' to the integral part of x.

	printf("Integral part of %.2f is: %.0f\n", x, integral);
	printf("Fractional part of %.2f is: %.2f\n", x, frac);

	return 0;
}
