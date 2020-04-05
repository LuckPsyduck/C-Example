#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	if ((fp = fopen("T.txt", "r"))==NULL)
	{
		fprintf(stderr, "ÎÄ¼þ¶ÁÈ¡Ê§°Ü!\n");
		exit(EXIT_FAILURE);
	}
	int ch;
	while ((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);
	printf("\n");
	fclose(fp);
}