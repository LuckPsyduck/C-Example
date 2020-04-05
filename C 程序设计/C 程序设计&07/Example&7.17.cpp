//#include<stdio.h>
//#include<stdlib.h>
//#define N 10
//void main()
//{
//	int value,radix=10;
//	char str[N] = {0};
//	scanf_s("%d", &value);
//	_itoa(value,str, radix);
//	printf("%s\n", str);
//}

#include<stdio.h>
void convert(int n)
{
	int i=0;
	if ((i = n / 10) != 0)
		convert(i);
	putchar(n % 10 + '0');
	putchar(' ');
}

void main()
{
	int number;
	printf("input an integer :");
	scanf("%d", &number);
	printf("output:");
	if (number < 0)
	{
		putchar('-');
		putchar(' ');
		number = -number;
	}
	convert(number);
}


