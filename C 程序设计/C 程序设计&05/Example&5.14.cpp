#include<stdio.h>
#include<math.h>
void main()
{
	double f0, f1, x1, x0;
	x1 =1.5;
	do
	{
		x0 = x1;
		f0 = 2 * pow(x0, 3) - 4 * pow(x0, 2) + 3 * x0 - 6;
		f1 = 6 * pow(x0, 2) - 8 * x0 + 3;
		x1 = x0 -f0 / f1;
	} while (fabs(x1 - x0) >= 1e-5);
	printf("%lf\n", x1);
}