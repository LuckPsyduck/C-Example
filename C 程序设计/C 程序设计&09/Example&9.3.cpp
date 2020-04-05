#include<stdio.h>
#define N 2
struct content
{
	int num;
	char name[20];
	int score[3];
};
void main()
{
	struct content student[N]/* = { {0,0,0} }*/;
	puts("enter information:");
	for (int i = 0; i < N; i++)
			scanf("%d %s %d %d %d", &student[i].num, student[i].name,\
				&student[i].score[0], &student[i].score[1], &student[i].score[2]);	
	puts("output information:");
	for (int i = 0; i < N; i++)
			printf("%d %s %d %d %d\n", student[i].num, student[i].name, \
				student[i].score[0], student[i].score[1], student[i].score[2]);
}