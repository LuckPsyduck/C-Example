//#include<stdio.h>
//void main()
//{
//	puts("   *   ");
//	puts("  ***  ");
//	puts(" ***** ");
//	puts("*******");
//	puts(" ***** ");
//	puts("  ***  ");
//	puts("   *   ");
//}

#include<stdio.h>
void main()
{
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j < 3 - i; j++)
			printf(" ");
		for (int k = 0; k <= 2 * i; k++)
			printf("*");
		putchar('\n');
	}
	for (int i = 0; i <=2; i++)
	{
		for(int j=0;j<i+1;j++)
			printf(" ");
		for (int k = 0; k <5-2 * i; k++)
			printf("*");
		putchar('\n');
	}
}