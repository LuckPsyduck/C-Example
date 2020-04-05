#include<stdio.h>
void main()
{
	int num[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &num[i][j]);
	int sum = 0;
	for (int i = 0; i < 3; i++)
		sum += num[i][i];
	printf("%d\n", sum);
}