#include<stdio.h>
#define N 5
void main()
{
	double num[N];
	for (int i = 0; i < N; i++)
		scanf("%lf", &num[i]);
	double max=num[0],min=num[0];
	for (int i = 1; i < N; i++)
	{ 
		max = max > num[i] ? max : num[i];
		min = min < num[i] ? min : num[i];
	}
	printf("%.1lf\n", max - min);
}