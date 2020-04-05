#include<stdio.h>
void main()
{
	int sum1 = 1, sum2 = 0;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum1 *= i;
		sum2 += sum1;
	}
	printf("sum2=%d\n", sum2);
}