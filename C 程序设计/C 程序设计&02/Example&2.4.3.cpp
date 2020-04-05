#include<stdio.h>
void main()
{
	int num[3];
	puts("enter three num:");
	for (int i = 0; i < 3; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < 3; i++)
		for(int j=i+1;j<3;j++)
		{ 
			if (num[i] > num[j])
			{
				int temp;
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	for (int i = 0; i < 3; i++)
		printf("%d\t",num[i]);
	putchar('\n');
}