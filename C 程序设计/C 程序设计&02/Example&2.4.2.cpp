#include<stdio.h>
void main()
{
	int cout[10];
	puts("enter 10 numbers:");
	for (int i = 0; i < 10; i++)
		scanf("%d", &cout[i]);
	for (int n = 1; n < 10; n++)
		cout[0] = cout[0] > cout[n] ? cout[0] : cout[n];
	printf("max=%d\n", cout[0]);
}
