#include<stdio.h>
#define N 5 
void main()
{
	int num[N];
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);
	int max = num[0];
	for (int i = 1; i < N; i++)
		max = max > num[i] ? max : num[i];
	printf("max=%d\n", max);
}