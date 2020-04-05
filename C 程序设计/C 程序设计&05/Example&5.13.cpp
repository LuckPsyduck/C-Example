#include<stdio.h>
#include<math.h>
void main()
{
	double a;
	puts("enter a:");
	scanf_s("%lf", &a);
	double m=a/2, n=0.5*(m+a/m);//m是任意初始值
	while (fabs(m - n) >=1e-5)
	{	
		m = n;
		n = 0.5*(m + a / m);
	}
	printf("%lf\n", n);
}