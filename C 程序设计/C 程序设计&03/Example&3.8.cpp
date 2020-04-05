#include<stdio.h>
void main()
{
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar('\t');
	putchar(c2);
	putchar('\n');
	printf("%d,%d\n", (int)c1, (int)c2);
}