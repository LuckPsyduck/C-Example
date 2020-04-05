#include<stdio.h>
#include<string.h>
#define N 20
#define M 10
void mystrncpy(char *content1, char *content2, int n)
{
	int i,j=strlen(content1);
	
	for (i = 0; i < n; i++)
		content1[j -1+ i] = content2[i];
	content1[j + i] = '\0';
	fputs(content1, stdout);
	printf("\n");
}
void main()
{
	char content1[N], content2[M];
	int count;
	puts("input content1:");
	fgets(content1, N - M - 1, stdin);
	puts("input content2:");
	fgets(content2, M - 1, stdin);
	puts("count:");
	scanf("%d", &count);
	puts("merge:");
	mystrncpy(content1, content2, count);
}