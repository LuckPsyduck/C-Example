#include<stdio.h>
void average(int content[][5], int n);
void find_nopass(int content[][5], int n);
void find_average(int content[][5], int n);
void main()
{
	int score[4][5],aver[4];
	for (int i = 0; i < 4; i++)
	{ 
		aver[i] = 0;
		for (int j = 0; j < 5; j++)
		{ 
			scanf_s("%d", &score[i][j]);
			aver[i] += score[i][j];
		}
	}
	average(score, 4);
	find_nopass(score, 4);
	find_average(score, 4);
}

void average(int content[][5], int n)
{
	double sum = 0;
	for (int i = 0; i < 4; i++)
		sum += content[i][0];
	printf("%lf\n", sum / 4);
}

void find_nopass(int content[][5], int n)
{
	for (int i = 0; i < 4; i++)
	{
		int n = 0;
		for (int j = 0; j < 5; j++)
		{
			if (content[i][j] < 60)
				n++;
		}
		if (n > 2)
		{
			for (int a = 0; a < 5; a++)
				printf("%d\t", content[i][a]);
			printf("\n");
			double sum = 0;
			for (int b = 0; b < 5; b++)
				sum += content[i][b];
			printf("%lf\n", sum / 5);
		}
	}
}
void find_average(int content[][5], int n)
{
	for (int i = 0; i < 4; i++)
	{
		int n = 0;
		for (int j = 0; j < 5; j++)
		{
			if (content[i][j] > 85)
				n++;
		}
		if (n == 5)
			for (int a = 0; a < 5; a++)
				printf("%d\t", content[i][a]);
	}
	int aver[4];
	for (int c = 0; c < 4; c++)
	{
		 aver[c] = 0;
		for (int d= 0; d< 5; d++)
			aver[c] += content[c][d];
	}
	for (int e = 0; e < 4; e++)
		if (aver[e]/5> 90)
			printf("%lf\n", aver[e]/5.0);
}