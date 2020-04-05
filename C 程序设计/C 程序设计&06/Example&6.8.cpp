//#include<stdio.h>
//#define N 4
//#define M 5
//void main()
//{
//	int i, j, k, a[N][M], max, maxj, flag;
//	printf("please enter matrix:\n");
//	for (i = 0; i < N; i++)
//		for (j = 0; j < M; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 0; i < N; i++)
//	{
//		max = a[i][0];
//		maxj = 0;
//		for(j=0;j<M;j++)
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				maxj = j;
//			}
//		flag = 1;
//		for(k=0;k<N;k++)
//			if (max > a[k][maxj])
//			{
//				flag = 0;
//				continue;
//			}
//		if (flag)
//		{
//			printf("a[%d][%d]=%d\n",i,maxj, max);
//			break;
//		}
//	}
//	if (!flag)
//		printf("it is not exit!\n");
//}

#include<stdio.h>
#include<stdlib.h>
#define M 4
#define N 5
int main()
{
	int num[M][N];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &num[i][j]);
	for (int i = 0; i < M; i++)
	{
		int temp;
		int m, n;
		temp = num[i][0];
		for (int j = 0; j < N; j++)
			temp = temp > num[i][j] ? temp : num[i][j];
		for (int j = 0; j < N; j++)
			if (temp == num[i][j])
			{
				m = i;
				n = j;
			}
		int count = 0;
		for (int a = 0; a < M; a++)
			if (temp <= num[a][n])
				++count;
		if (count == M)
		{ 
			printf("num[%d][%d]=%d\n",m,n,num[m][n]);
			return 0;
		}
	}
	printf("no exist!\n");
	return 0;
}