#include<stdio.h>
#define N 3
#define M 5
void print(double(*num1)[M], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < M; j++)
			scanf("%lf", &num1[i][j]);
}
void aver_row(double(*num1)[M], int n)
{
	for (int i = 0; i < n; i++)
	{ 
		double sum=0;
		for (int j = 0; j < M; j++)
			sum += num1[i][j];
		printf("%.3lf\t", sum / M);
	}
	printf("\n");
}
void aver(double(*num1)[M], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < M; j++)
			sum += num1[i][j];
	printf("%.3lf\n", sum / 15);
}
void max(double(*num1)[M], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < M; j++)
			num1[0][0] = num1[0][0] > num1[i][j] ? num1[0][0] : num1[i][j];
	printf("max=%.3lf\n", num1[0][0]);
}
void main()
{
	double num[N][M];
	print(num, 3);
	aver_row(num, 3);
	aver(num, 3);
	max(num, 3);
}