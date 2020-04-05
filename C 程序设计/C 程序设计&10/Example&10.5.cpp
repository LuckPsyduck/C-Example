#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define N 2
struct content
{
	int num;
	char name[10];
	int score[3];
};
void main()
{
	FILE *fp1, *fp2;
	char content1[N], content2[N], content3[N + N];
	if ((fp1 = fopen("A.txt", "wb")) == NULL)
	{
			printf("not open the file!\n");
			exit(EXIT_FAILURE);
	}
	struct content student[N];
	puts("enter information:");
	for (int i = 0; i < N; i++)
		scanf("%d %s %d %d %d", &student[i].num, student[i].name, \
			&student[i].score[0], &student[i].score[1], &student[i].score[2]);
	double aver[N];
	for (int i = 0; i<N; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
			sum += student[i].score[j];
		aver[i] = sum / 3.0;
	}
	fwrite(student, sizeof(struct content), N, fp1);
	fwrite(aver,sizeof(double),N,fp1);

	if ((fp2 = fopen("A.txt", "rb")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < N; i++)
	{ 
		fread(&aver[i], sizeof(aver), N, fp2);
		printf("%lf\t", aver[i]);
	}
	putchar('\n');
	for (int i = 0; i < N; i++)
	{
		fread(&student[i], sizeof(struct content), N, fp2);
		printf("%d %s %d %d %d\n", student[i].num, student[i].name, \
			student[i].score[0], student[i].score[1], student[i].score[2]);
	}
}