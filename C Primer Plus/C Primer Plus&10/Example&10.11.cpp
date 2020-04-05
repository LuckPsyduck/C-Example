#include<stdio.h>
#define N 3
#define M 5
void change(int (*num)[M], int n)
{
	for (int i = 0; i < n; i++)
	{ 
		for (int j = 0; j < M; j++)
			printf("%3d", 2 * num[i][j]);
		printf("\n");
	}
}
void main()
{
	int num[N][M];
	int(*p)[M];
	p = num;
	puts("enter num:");
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%d", &num[i][j]);
	change(p,N);
}

