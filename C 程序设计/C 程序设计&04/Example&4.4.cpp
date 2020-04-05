#include<stdio.h>
void main()
{
	int a, b, c;
	scanf("%d,%d,%d", &a, &b, &c);
	int max;
	if (a > b)
		max = a;
	else
		max = b;
	if (max > c)
		printf("%d\n", max);
	else
		printf("%d\n", c);
}