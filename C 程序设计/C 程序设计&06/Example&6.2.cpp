//#include<stdio.h>
//void main()
//{
//	int num[10] = {0}, temp = 0;
//	puts("please enter 10 numbers:");
//	for (int n = 0; n < 10; n++)
//		scanf("%d", &num[n]);
//	for(int i=0;i<9;i++)
//		for (int j = 0; j < 9 - i; j++)
//		{
//			if (num[j] > num[j + 1])
//			{
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	for (int m = 0; m < 10; m++)
//		printf("%d\t", num[m]);
//	putchar('\n');
//}

#include<stdio.h>
void main()
{
	int a[11];
	puts("enter data:");
	for (int i = 1; i <= 10; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("\n");
	printf("The original numbers:\n");
	for (int i = 1; i <= 10; i++)
		printf("%5d", a[i]);
	printf("\n");
	int min,temp;
	for (int i = 1; i <= 9; i++)
	{
		min = i;
		for (int j = i + 1; j <= 10; j++)
			if (a[min] > a[j])
				min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	printf("\n the sort numbers:\n");
	for (int i = 1; i <= 10; i++)
		printf("%5d", a[i]);
	printf("\n");
}