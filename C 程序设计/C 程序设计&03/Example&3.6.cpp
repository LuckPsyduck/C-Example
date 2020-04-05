#include<stdio.h>
void main()
{
	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
	puts("printf:");
	printf("%c,%c,%c,%c,%c\n", c1 + 4, c2 + 4, c3 + 4, c4 + 4, c5 + 4);
	puts("putchar:");
	putchar(c1 + 4);
	putchar(c2 + 4);
	putchar(c3 + 4);
	putchar(c4 + 4);
	putchar(c5 + 4);
}