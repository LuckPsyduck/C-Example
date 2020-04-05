#include<stdio.h>
void main()
{
	int x,n;
	puts("enter x,n value:");
	scanf_s("%d,%d", &x, &n);
	double sum = 0;
	if (n == 0)
		printf("1\n");
	else if (n == 1)
		printf("%d\n", x);
	else
	{                                              
		double i = 1.0, j = x;
		double sum = 0.0;
		for (int m = 2; m <= n; m++)
		{
			sum = (double)((2 *m - 1)*x - j - (m - 1)*i) /m;
			i = j;
			j = sum;
		}
		printf("%lf\n", sum);
	}
}