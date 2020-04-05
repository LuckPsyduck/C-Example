#include<stdio.h>
#define N 5
void sort(int *num1, int n);
void main()
{
	int num1[N], num2[N];
	puts("enter five numbers:");
	for (int i = 0; i < N; i++)
		scanf_s("%d", &num1[i]);
	sort(num1, N);
}
void sort(int *num1,int n)
{
	int  num2[N];
	for (int i = 0; i < N; i++)
		num2[i] = num1[N - 1 - i];
	for (int i = 0; i < N; i++)
		printf("%d\t", num2[i]);
	putchar('\n');
}