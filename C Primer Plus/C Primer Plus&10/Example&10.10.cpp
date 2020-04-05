#include<stdio.h>
#define N 5
void plus(int *num1, int *num2, int *num3, int n)
{
	for (int i = 0; i < N; i++)
	{ 
		num3[i] = num1[i] + num2[i];
		printf("%4d", num3[i]);
	}
	puts("\n");
}
void main()
{
	int num1[N], num2[N], num3[N];
	puts("input num1:");
	for (int i = 0; i < N; i++)
		scanf("%d", &num1[i]);
	puts("input num2:");
	for (int i = 0; i < N; i++)
		scanf("%d", &num2[i]);
	puts("num1+num2=:");
	plus(num1, num2, num3, N);
}