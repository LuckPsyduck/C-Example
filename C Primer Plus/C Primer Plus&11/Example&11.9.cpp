#include<stdio.h>
#include<string>
#define N 20
void main()
{
	char content1[N];
	int i=0;
	puts("input contnent1:");
	fgets(content1, N - 1, stdin);//zi dong jia "\n",strlen bao han "\n"
	for (char *pos = content1 + strlen(content1)- 2; i < strlen(content1)-1; pos -= 1, i++)
		printf("%c\t", *pos);
	printf("\n");
}