//#include<stdio.h>
//#include<math.h>
//void main()
//{
//	int n;
//	puts("enter 0-999:");
//	scanf("%d", &n);
//	if (n >= 0 && n < 1000)
//		printf("%d\n", (int)sqrt(n));
//	else
//		puts("enter 0-999:");
//}
#include<stdio.h>
#include<math.h>
#define M 100
int main()
{
	int i, k;
	printf("请输入一个小于%d的整数:", M);
	scanf("%d", &i);
	if (i > M)
	{
		printf("输入的数不符合要求，请重新输入个小于%d的整数:", M);
		scanf("%d", &i);
	}
	k = sqrt(i);
	printf("%d的平方根的整数部分为:%d\n", i, k);
	return 0;
}