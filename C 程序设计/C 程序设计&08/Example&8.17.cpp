#include<stdio.h>
#define N 10
int strcmp(char *p1, char *p2);
void main()
{
	char content1[N], content2[N];
	puts("content1:");
	fgets(content1, N, stdin);
	puts("content2:");
	fgets(content2, N, stdin);
	strcmp(content1, content2);
}
int strcmp(char *p1, char *p2)
{
	for (int i = 0; i < N; i++)
		if (*p1++ != *p2++)
		{
			printf("%d\n", *(p1-1) - *(p2-1));
			return 0;
		}
		else
			continue; 
	printf("0\n");
}