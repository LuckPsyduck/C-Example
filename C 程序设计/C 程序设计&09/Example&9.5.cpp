#include<stdio.h>
#define N 10
struct content
{
	int num;
	char name[10];
	int score[3];
};
void main()
{
	struct content student[N];
	puts("enter information:");
	for (int i = 0; i < N; i++)
		scanf("%d %s %d %d %d", &student[i].num, student[i].name, \
			&student[i].score[0], &student[i].score[1], &student[i].score[2]);
	puts("average score:");
	double aver[N];
	for(int i=0;i<N;i++)
	{ 
		int sum = 0;
		for (int j = 0; j < 3; j++)
			sum += student[i].score[j];
		aver[i] = sum / 3.0;
		printf("%lf\n", aver[i]);
	}
	double max = aver[0];
	for (int i = 1; i < N; i++)
		max = max > aver[i] ? max : aver[i];
	for (int i = 0; i < N; i++)
		if (max == aver[i])
		{
			printf("%d %s %d %d %d\n", student[i].num, student[i].name, \
				student[i].score[0], student[i].score[1], student[i].score[2]);
		}
}