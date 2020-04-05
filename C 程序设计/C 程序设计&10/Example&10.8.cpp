#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define N 3
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
	struct content student1[N];
	puts("enter information:");
	for (int i = 0; i < N; i++)
		scanf("%d %s %d %d %d", &student[i].num, student[i].name, \
			&student[i].score[0], &student[i].score[1], &student[i].score[2]);
	struct content new_student;
	double new_aver;
	int new_sum = 0;
	puts("enter new student information:");
	scanf("%d %s %d %d %d", &new_student.num, new_student.name, \
		&new_student.score[0], &new_student.score[1], &new_student.score[2]);
	for (int i = 0; i < 3; i++)
		new_sum += new_student.score[i];
	new_aver = new_sum / 3.0;
	double aver[N];
	double avera[N];
	for (int i = 0; i<N; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
			sum += student[i].score[j];
		aver[i] = sum / 3.0;
		avera[i] = aver[i];
	}
	int temp;
	for (int i = 0; i<N - 1; i++)
		for (int j = 0; j < N - 1 - i; j++)
			if (avera[j] >avera[j + 1])
			{
				temp = avera[j];
				avera[j] = avera[j + 1];
				avera[j + 1] = temp;
			}


	for (int i = 0; i<N; i++)
		for (int j = 0; j<N; j++)
			if (avera[i] == aver[j])
				student1[i] = student[j];

	struct content new_student3[N + 1];
	for (int i = 0; i<N; i++)
		if (new_aver < avera[i])
		{
			for (int j = 0; j <i; j++)
				new_student3[j] = student1[j];
			new_student3[i] = new_student;
			for (int n = i + 1; n<N + 1; n++)
				new_student3[n] = student1[n - 1];
		}

	fwrite(new_student3, sizeof(struct content), N + 1, fp1);


	if ((fp2 = fopen("A.txt", "rb")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < N + 1; i++)
	{
		fread(&new_student3[i], sizeof(struct content), N + 1, fp2);
		printf("%d %s %d %d %d\n", new_student3[i].num, new_student3[i].name, \
			new_student3[i].score[0], new_student3[i].score[1], new_student3[i].score[2]);
	}
}