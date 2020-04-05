#include<stdio.h>
#include<malloc.h>
void main()
{
	double *p1;
	int n;
	puts("数组的维数：");
	scanf("%d", &n);
	p1 = (double *)malloc(n * sizeof(double));
	for (int i = 0; i < n; i++)
		scanf("%lf",&p1[i]);
	for (int i = 0; i <n; i++)
		printf("%lf\t", p1[n-1-i]);
}