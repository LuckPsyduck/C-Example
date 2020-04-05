#include<stdio.h>
#define N 6
#define M 6
void main()
{
	char content1[N], content2[M],content3[N+M];
	puts("enter content1:");
	gets_s(content1);
	puts("enter content2:");
	gets_s(content2);
	for (int i = 0; i < N - 1; i++)
		content3[i] = content1[i];
	for (int i = N - 1; i < N + M-2; i++)
		content3[i] = content2[i - N + 1];
	for (int i = 0; i < N + M - 2; i++)
		printf("%c", content3[i]);
}