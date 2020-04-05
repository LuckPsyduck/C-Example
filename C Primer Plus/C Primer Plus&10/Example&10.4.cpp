#include<stdio.h>
#define N 5
void main()
{
	double num[N];
	int i;
	for (i = 0; i < N; i++)
		scanf("%lf", &num[i]);
	//for(i=0;i<N-1;i++)
	//	if (num[i] > num[i + 1])
	//	{
	//		double temp = 0;
	//		temp = num[i + 1];
	//		num[i + 1] = num[i];
	//		num[i] = temp;
	//	}
	double max = num[0];
	for (int i = 1; i < N; i++)
		max = max > num[i] ? max : num[i];
	for (int i = 0; i < N; i++)
		if (num[i] == max)
		{
			printf("%d\n", i);
			break;
		} 
}