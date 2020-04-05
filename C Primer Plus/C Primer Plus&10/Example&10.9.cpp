#include<stdio.h>
#define N 3
#define M 5
void main()
{
	int num[N][M],num1[N][M];
	puts("输入数组的元素：");
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
		{
			scanf("%d", &num[i][j]);
			num1[i][j] = num[i][j];
		}
	puts("num:");
	for (int i = 0; i < N; i++)
	{ 
		for (int j = 0; j < M; j++)
			printf("%d\t", num[i][j]);
		printf("\n");
	}
	puts("num1:");
	for (int i = 0; i < N; i++)
	{ 
		for (int j = 0; j < M; j++)
			printf("%d\t", num1[i][j]);
		printf("\n");
	}
}