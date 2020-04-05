#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define N 10
void main()
{
	FILE *fp;
	char content[N];
	gets_s(content);
	for (int i = 0; i < sizeof(content)/sizeof(content[0]); i++)
		content[i] = toupper(content[i]);
	if ((fp = fopen("test.txt", "w")) == NULL)
	{
		printf("not open the file!\n");
		exit(EXIT_FAILURE);
	}
	fputs(content, fp);
	fclose(fp);
}