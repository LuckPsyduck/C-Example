#include<stdio.h>
#include<math.h>
void main()
{
	double r;
	int d, p, m;
	scanf("%lf,%d,%d", &r, &d, &p);
	//printf("m=%lf\n", log10(p / (p - d*r)) / log10(1 + r));
	printf("m=%6.1lf\n", log10(p / (p - d*r)) / log10(1 + r));
}