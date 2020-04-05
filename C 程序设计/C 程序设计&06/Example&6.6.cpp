#include<stdio.h>
#define N 10
void main()
{
	int num[N][N] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		num[i][0] = 1;
		num[i][i] = 1;
	}
	for (int i = 2; i < N; i++)
		for (int j = 1; j < i; j++)
			num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
	for (int i = 0; i <N; i++)
	{ 
		for (int j =0; j < N; j++)
			printf("%5d", num[i][j]);
		putchar('\n');
	}
		
}