#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;


	if ((fp1 = fopen(argv[1], "rb")) == NULL)
	{
		printf("文件读取失败!\n");
		exit(EXIT_FAILURE);
	}



	if ((fp2 = fopen(argv[2], "wb")) == NULL)
	{
		printf("文件写入失败!\n");
		exit(EXIT_FAILURE);
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		fputc(ch, fp2);
		putchar(ch);
	}

	fclose(fp1);
	fclose(fp2);
}