#include<stdio.h>
void main()
{
	puts("please enter 10 integers:");
	int num[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &num[i]);
	for (int i = 1; i < 10; i++)
		num[0] = num[0] > num[i] ? num[0] : num[i];
	printf("max=%d\n", num[0]);
}