#include<stdio.h>
#define N 10
void main()
{
	int num[N];
	for (int i = 0; i < N; i++)
		scanf_s("%d", &num[i]);
	for(int i=0;i<N-1;i++)
	{ 
		int temp=0;
		for (int j = i + 1; j < N; j++)
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
	}
	for (int i = 0; i < N; i++)
		printf("%d", num[i]);
	puts("\n");
}