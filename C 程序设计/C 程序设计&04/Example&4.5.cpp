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
	printf("������һ��С��%d������:", M);
	scanf("%d", &i);
	if (i > M)
	{
		printf("�������������Ҫ�������������С��%d������:", M);
		scanf("%d", &i);
	}
	k = sqrt(i);
	printf("%d��ƽ��������������Ϊ:%d\n", i, k);
	return 0;
}