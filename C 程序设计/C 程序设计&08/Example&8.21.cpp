#include<stdio.h>
void sort(int num[10]);
void main()
{
	int num[10] = { 0 }, temp = 0;
	puts("please enter 10 numbers:");
	for (int n = 0; n < 10; n++)
		scanf_s("%d", &num[n]);
	sort(num);
}
void sort(int num[10])
{
	int temp;
	for (int i = 0; i<9; i++)
		for (int j = 0; j < 9 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	for (int m = 0; m < 10; m++)
		printf("%d\t", num[m]);
	putchar('\n');
}
