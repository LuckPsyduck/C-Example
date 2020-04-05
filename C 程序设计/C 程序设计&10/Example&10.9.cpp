#include<stdio.h>
#include<stdlib.h>
#define N 2
struct employee
{
	char name[10];
	int num;
	int gender;
	int age;
	char address[10];
	int wage;
	char health[10];
	char degree[10];
};
void main()
{
	FILE *fp1, *fp2;
	struct employee worker[N];
	puts("enter information:");
	for (int i = 0; i < N; i++)
		scanf("%s %d %d %d %s %d %s %s", worker[i].name, &worker[i].num, &worker[i].gender, &worker[i].age,\
			worker[i].address, &worker[i].wage, worker[i].health, worker[i].degree);
	if ((fp1= fopen("A.txt", "wb")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	fwrite(worker, sizeof(struct employee), N, fp1);

	if ((fp2 = fopen("A.txt", "rb")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	puts("check file content:");
	for (int i = 0; i < N; i++)
	{
		fread(&worker[i], sizeof(struct employee), N , fp2);
		printf("%s %d %d %d %s %d %s %s\n", worker[i].name, worker[i].num, worker[i].gender,worker[i].age, \
			worker[i].address, worker[i].wage, worker[i].health, worker[i].degree);
	}
}