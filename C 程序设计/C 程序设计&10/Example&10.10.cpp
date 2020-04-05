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
		scanf("%s %d %d %d %s %d %s %s", worker[i].name, &worker[i].num, &worker[i].gender, &worker[i].age, \
			worker[i].address, &worker[i].wage, worker[i].health, worker[i].degree);
	puts("enter delete num:");
	int num_delete;
	scanf("%d", &num_delete);
	if ((fp1 = fopen("A.txt", "wb")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	fwrite(worker, sizeof(struct employee), N, fp1);

	struct employee worker_new[N-1];
	for(int i=0;i<N;i++)
		if (num_delete == worker[i].num)
		{
			for (int j = 0; j < i; j++)
				worker_new[j] = worker[j];
			for(int j=i+1;j<N;j++)
				worker_new[j-1] = worker[j];
		}

	if ((fp2 = fopen("B.txt", "wb")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	fwrite(worker_new, sizeof(struct employee), N-1, fp2);

	if ((fp2 = fopen("B.txt", "rb")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	puts("check file content:");
	for (int i = 0; i < N-1; i++)
	{
		fread(&worker_new[i], sizeof(struct employee), N-1, fp2);
		printf("%s %d %d %d %s %d %s %s\n", worker_new[i].name, worker_new[i].num, worker_new[i].gender, worker_new[i].age, \
			worker_new[i].address, worker_new[i].wage, worker_new[i].health, worker_new[i].degree);
	}
}