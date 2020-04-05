#include<stdio.h>
#include<malloc.h>
#define N 5
void main()
{
	char p[N];
	gets_s(p);
	for (int i = 0; i < N-1; i++)
		printf("%2c",p[i]);
	puts("\n");
}