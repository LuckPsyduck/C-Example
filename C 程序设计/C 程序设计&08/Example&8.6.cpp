#include<stdio.h>
#include<string.h>
#define N 10
void main()
{
	char content[N];
	gets_s(content);
	printf("%d\n", strlen(content));
}