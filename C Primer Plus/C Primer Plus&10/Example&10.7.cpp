#include<stdio.h>
#include<malloc.h>
void main()
{
	double **num,**num1;
	int m,n;
	puts("二维数组的行和列:");
	scanf("%d,%d", &m, &n);
	num = (double **)malloc(sizeof(double *) * m);//分配指针数组
	for (int i = 0; i<m; i++)
	{
		num[i] = (double *)malloc(sizeof(double) * n);//分配每个指针所指向的数组
	}
	num1 = (double **)malloc(sizeof(double *) * m);//分配指针数组
	for (int i = 0; i<m; i++)
	{
		num1[i] = (double *)malloc(sizeof(double) * n);//分配每个指针所指向的数组
	}
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{ 
			scanf("%lf", &num[i][j]);
			num1[i][j] = num[i][j];
			printf("%lf\t", num1[i][j]);
		}
	printf("\n");
}