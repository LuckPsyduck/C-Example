#include<stdio.h>
void main()
{
	int a, b, c, d;
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
	int max1, max2;
	if (a > b)
		max1 = a;
	else
		max1 = b;
	if (c > d)
		max2 = c;
	else
		max2 = d;
	if (max1 > max2)
		printf("%d\n", max1);
	else
		printf("%d\n", max2);
}