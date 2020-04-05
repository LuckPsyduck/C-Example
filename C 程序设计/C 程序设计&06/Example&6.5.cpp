#include<stdio.h>
#define N 5
void main()
{
	int num1[N], num2[N];
	puts("enter five numbers:");
	for (int i = 0; i < N; i++)
		scanf("%d", &num1[i]);
	//for (int i = 0; i < N; i++)
	//	num2[i] = num1[N - 1 - i];
	int temp;
	for (int i = 0; i < N / 2; i++)
	{
		temp = num1[i];
		num1[i] = num1[N - 1 - i];
		num1[N - i - 1] = temp;
	}
	//for (int i = 0; i < N; i++)
	//	printf("%d\t", num2[i]);
	for (int i = 0; i < N; i++)
		printf("%d\t", num1[i]);
	putchar('\n');
}