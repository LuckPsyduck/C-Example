#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	puts("enter n=:");
	scanf("%d", &n);
	int **a;
	a = (int **)malloc(sizeof(int *) * n);//分配指针数组
	for (int i = 0; i<n; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * n);//分配每个指针所指向的数组
	}

	for(int i=0;i<n*n;i++)
		for(int j=0;j<n*n;j++)
			if(a[i][j]==)



	for (int i = 0; i<n; i++)
	{
		free(a[i]);
	}
	free(a);
}