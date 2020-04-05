#include<stdio.h>
void main()
{
	int m = 0;
	printf("enter an enteger:\n");
	while (1)
	{
		scanf("%d", &m);
		if (m % 3 == 0 && m % 5 == 0)
		{
			puts("yes!");
			break;
		}
		else
			puts("no!");
	}
}