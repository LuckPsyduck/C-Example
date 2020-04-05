#include<stdio.h>
void main()
{
	int y, m, d;
	int num1[12]= { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int num2[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf_s("%d,%d,%d", &y, &m, &d);
	int sum = 0;
	for (int i = 0; i < m - 1; i++)
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			sum += num1[i];
		else
			sum += num2[i];
	printf("%d\n", sum + d);
}