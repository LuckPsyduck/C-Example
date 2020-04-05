#include<stdio.h>
#include<string.h>
#define N 8
void main()
{
	int num1[N], num2[N + 1] = {0};
	int m;
	puts("请输入要插入的数:");
	scanf("%d", &m);
	puts("按大小输入5个数：");
	for (int i = 0; i < N; i++)
		scanf("%d", &num1[i]);
	for (int i = 0; i < N; i++)
		num2[i] = num1[i];
	
	int n;
	for (n = 0; n < N; n++)
		if (m <=num1[n])
			break;
	num2[n ] = m;
	for (int i = n ; i < N; i++)
		num2[i+1] = num1[i];
	for (int i = 0; i < N+1; i++)
		printf("%d\t", num2[i]);
	putchar('\n');
}