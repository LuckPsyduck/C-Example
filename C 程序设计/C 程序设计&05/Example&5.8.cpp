#include<stdio.h>
#include<math.h>
void main()
{
	int i = 100;
	while (i++ < 999)
	{
		if (i == pow(i / 100, 3) + pow(i % 100 / 10, 3) + pow(i % 10, 3))
			printf("%d\t", i);
	}
	putchar('\n');
}