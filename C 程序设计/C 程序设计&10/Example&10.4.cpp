#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define N 10
void main()
{
	FILE *fp1,*fp2,*fp3;
	char content1[N], content2[N], content3[N+N];
	if ((fp1 = fopen("A.txt", "r")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	fgets(content1, N - 1, fp1);
	strcpy(content3, content1);
	if ((fp2= fopen("B.txt", "r")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	fgets(content2, N - 1, fp2);
	if ((fp3 = fopen("C.txt", "w")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	strcat(content3, content2);
	char temp;
	int a = strlen(content1)+strlen(content2);
	for (int i = 0; i<a-1; i++)
		for (int j = 0; j < a-1 - i; j++)
		{
			if (content3[j] > content3[j + 1])
			{
				temp = content3[j];
				content3[j] = content3[j + 1];
				content3[j + 1] = temp;
			}
		}
	fputs(content3, fp3);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}