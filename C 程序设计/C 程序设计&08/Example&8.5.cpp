#include<stdio.h>
void main()
{
	int num[50];
	int *p;
	int n,i,m,k;
	printf(" input number of person:n=");
	scanf("%d", &n);
	p = num;
	for (i = 0; i < n; i++)
		*(p + i) = i + 1;
	i = 0, k = 0, m = 0;//m为删除的人数；
	while (m < n - 1)
	{
		if (*(p + i) != 0)
			k++;
		if (k == 3)
		{
			*(p + i) = 0;
			k = 0;
			m++;
		}
		i++;
		if (i == n)
			i = 0;
	}//把前面的数都变成0
	while (*p == 0)
		p++;
	printf("the last one is NO.%d\n", *p);
}

//#include<stdio.h>//错误
//#define N 5
//void main()
//{
//	int num[N];
//	int *p1 = num;
//	int *p2 = num;
//	puts("enter number:");
//	for (int i = 0; i < N; i++)
//		scanf("%d",(p1+i));
//	int i,j;
//	for (i = 0; i < N - 3; i++)
//	{
//		for (j = 3; j < N-i; j++)
//			*(++p2) = *(p1+j);
//
//		*p2 = *p1;
//		*(p2+1) = *(p1+1);
//		for (j = 0; j < N - 1 - i; j++)
//			num2[i+1][j] = num[i][j];
//	}
//	printf("%d\n", num[i+2][2]);
//}