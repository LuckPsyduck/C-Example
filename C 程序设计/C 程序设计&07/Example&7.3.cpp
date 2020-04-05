//#include<stdio.h>
//int main()
//{
//	int m;
//	puts("enter an enteger:");
//	scanf_s("%d",&m);
//	for (int i = 2; i < m; i++)
//		if (m%i == 0)
//		{
//			puts("不是素数!");
//			return 0;
//		}
//	puts("是素数！");
//}

#include<stdio.h>
int primer(int n)
{
	int flag = 1, i;
	for (i = 2; i < n / 2 && flag == 1; i++)
		if (n%i == 0)
			flag = 0;
	return flag;
}
void main()
{
	int n;
	printf("enter an integer :");
	scanf("%d", &n);
	if (primer(n))
		printf("%d is a primer.\n", n);
	else
		printf("%d is not a primer.\n", n);
}