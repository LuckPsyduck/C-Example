#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5
void main()
{
	FILE *fp;
	if ((fp = fopen("T.txt", "rb")) == nullptr)
	{
		printf("ÎÄ¼þ¶ÁÈ¡´íÎó£¡\n");
		exit(EXIT_FAILURE);
	}
	/*char content[N];
	fread(content, sizeof(content), 1, fp);
	
	for (int i = 0; i < N; i++)
		printf("%c\t", content[i]);
	printf("\n");*/

	int ch;
	while ((ch = fgetc(fp)) != '#')
		fputc(ch, stdout);
	puts("\n");
	fclose(fp);
}