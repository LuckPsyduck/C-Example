#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#define N 12
void main()
{
	char content1[N] = {' '}, content2[N] = { ' ' };
	FILE *fp1, *fp2;
	fgets(content1, N-1, stdin);
	if ((fp1 = fopen("A.txt", "wb")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	fwrite(content1, sizeof(content1[0]), N, fp1);
	fclose(fp1);

	if ((fp2 = fopen("A.txt", "rb")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	fread(content2, sizeof(content1[0]), N, fp2);
	int m;
	m = strlen(content2);
	printf("%d", m);
	for (int i = 0; i < strlen(content2); i++)
	{
		printf("%s", content2[i]);
	}
	
	for (int i = 0; i<sizeof(content2)/sizeof(content2[0]); i++)
		printf("%c\t", toupper(content2[i]));
	putchar('\n');
	
	fclose(fp2);
}