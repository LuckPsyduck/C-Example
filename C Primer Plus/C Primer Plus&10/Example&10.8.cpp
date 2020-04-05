#include<stdio.h>
void main()
{
	int num1[7],num[3];
	for (int i = 0; i < 7; i++)
		scanf("%d", &num1[i]);
	for (int i = 0; i < 3; i++)
	{ 
		num[i] = num1[i + 2];
		printf("%d\t", num[i]);
	}
	printf("\n");
}