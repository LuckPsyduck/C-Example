#include<stdio.h>
#define N 4
void main()
{
	puts("enter 0-9999:");
	int num;
	int n=0;
	scanf_s("%d", &num);
	int content[N] = { num / 1000,num / 100 % 10,num % 100 / 10,num % 10};
	int rever_content[N];
	int content1[N];
	int m = 0;
	for (int i = 0; i < N; i++)
		if (content[i] != 0)
		{
			printf("%d\n", 4 - i); 
			for (int j = i; j < 4; j++)
				printf("%d\t", rever_content[m++] =content[j]);
			putchar('\n');
			break;
		}
	for (int i = 0; i < m ; i++)
		printf("%d\t",content1[i] = content[m - 1 - i]);
	putchar('\n');
}