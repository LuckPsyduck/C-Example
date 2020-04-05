#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 41
int main(int argc, char *argv[])
{
	FILE *fp;
	char words[MAX];

	if ((fp = fopen(argv[1], "a+")) == NULL)
	{
		fprintf(stderr, "cannot open files\n");
		exit(EXIT_FAILURE);
	}
	puts("enter words to add the file ;please enter # terminate.");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%s\n", words);
	puts("file contents: ");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	return 0;
}