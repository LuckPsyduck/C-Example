#include<stdio.h>
void main()
{
	for (int i = 100; i <= 200; i++)
	{ 
		int n= 0;
		for (int j = 2; j < i; j++)
			if (i%j != 0)
			{ 
				++n;
				continue;
			}
		if (n == i - 2)
			printf("%d\t", i);
	}
	putchar('\n');
}