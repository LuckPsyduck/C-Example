#include<stdio.h>
void main()
{
	int score[10][5];
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 5; j++)
			scanf_s("%d", &score[i][j]);
	puts("每个学生的平均分：");
	for (int i = 0; i < 10; i++)
	{
		int sum = 0;
		for (int j = 0; j <5; j++)
			sum += score[i][j];
		printf("%lf\t", (double)sum / 5);
	}
	puts("\n每门课的平均分:");
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j <10; j++)
			sum += score[j][i];
		printf("%lf\t", (double)sum / 10);
	}
	puts("分数最高:");
	int score1[10] = { 0 };
	for (int i =0; i <10; i++)
	{
		score1[i] = score[i][0];
		for (int j = 1; j < 5; j++)
			score1[i] = score1[i] > score[i][j] ? score1[i] : score[i][j];
	}
	int max = score1[0];
	for (int i = 1; i < 10; i++)
		max = max > score1[i] ? max : score1[i];
	for (int i = 0; i < 10; i++)
		if (max == score1[i])
		{
			printf("%d\n", i);
			for (int j = 0; j < 5; j++)
				printf("%d\t", score[i][j]);
		}
}