#include<stdio.h>
#define N 5
#define M 2
void main()
{
	int num1[N],num2[N], num3[N];
	for (int i = 0; i < N; i++)
	{ 
		scanf_s("%d", &num1[i]);
		num2[i] = num1[i];
	}
	for (int i = 0; i < M; i++)
		num1[i] = num1[N-1 - i];
	for (int i = 0; i <N-M; i++)
		num3[i+M] = num2[i];
	for (int i = M; i < N; i++)
		num1[i] = num3[i];
	for (int i = 0; i < N; i++)
		printf("%d\t", num1[i]);
}
