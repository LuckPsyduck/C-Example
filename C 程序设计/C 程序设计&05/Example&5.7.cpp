#include<stdio.h>
#include<math.h>
void main()
{
	int sum1 = 0, sum2 = 0;
	double sum3 = 0;
	for (int i = 1; i <= 100; i++)
		sum1 += i;
	for (int i = 1; i <= 50; i++)
		sum2 += pow(i, 2);
	for (int i = 1; i <= 10; i++)
		sum3 += 1.0 / i;
	printf("%lf\n",sum1 + sum2 + sum3);
}