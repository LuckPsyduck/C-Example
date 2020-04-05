#include<stdio.h>
#define N 3
void main()
{
	int content[N][N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf_s("%d", &content[i][j]);
	for (int i = 0; i < N; i++)
	{ 
		for (int j = 0; j < N; j++)
			printf("%2d", content[j][i]);
		putchar('\n');
	}
}