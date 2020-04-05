#include<stdio.h>
void main()
{
	int  i = 2, j = 1, m = 0;
	double sum = 2.0;
	for (int n = 1; n < 20; n++)
	{
		m = i;
		sum += (double)(i + j) / i;
		i += j;
		j = m;
	}
	printf("%lf\n", sum);
}