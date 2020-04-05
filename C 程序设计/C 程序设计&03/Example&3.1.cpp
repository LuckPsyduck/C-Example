#include<stdio.h>
#include<math.h>
void main()
{
	double r,p;
	int n;
	puts("please enter r and n:");
	scanf("%lf,%d", &r, &n);
	p=pow((1 + r), n);
	printf("%lf\n", p);
}