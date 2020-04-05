#include<stdio.h>
void main()
{
	int num = 0;
	for (int i = 1; i < 101; i++)
		num += i;
	printf("%d\n", num);
}