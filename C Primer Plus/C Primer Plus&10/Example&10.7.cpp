#include<stdio.h>
#include<malloc.h>
void main()
{
	double **num,**num1;
	int m,n;
	puts("��ά������к���:");
	scanf("%d,%d", &m, &n);
	num = (double **)malloc(sizeof(double *) * m);//����ָ������
	for (int i = 0; i<m; i++)
	{
		num[i] = (double *)malloc(sizeof(double) * n);//����ÿ��ָ����ָ�������
	}
	num1 = (double **)malloc(sizeof(double *) * m);//����ָ������
	for (int i = 0; i<m; i++)
	{
		num1[i] = (double *)malloc(sizeof(double) * n);//����ÿ��ָ����ָ�������
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