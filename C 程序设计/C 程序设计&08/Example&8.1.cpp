#include<stdio.h>
void main()
{
	int num[3] = { 0 }, temp = 0;
	int *p = num;
	puts("please enter 10 numbers:");
	for (int n = 0; n < 3; n++)
		scanf_s("%d", &num[n]);
	for (int i = 0; i<2; i++)
		for (int j = 0; j < 2 - i; j++)
		{
			if (*(p+j )> *(p+j+1))
			{
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	for (int m = 0; m < 3; m++)
		printf("%d\t",*(p+m));
	putchar('\n');
}