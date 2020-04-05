#include<stdio.h>
#define N 5
#define M 3
void main()
{
	char content1[N+M],content2[M];
	gets_s(content1);
	gets_s(content2);
	int m;
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++)
		content1[m+i] = content2[i];
	puts(content1);
}