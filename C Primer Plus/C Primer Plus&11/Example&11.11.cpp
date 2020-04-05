#include<stdio.h>
#include<string.h>
#define N 10
#define M 10
void input(char content[N][M])
{
	puts("«Î ‰»Îcontent:");
	for (int i = 0; i < N; i++)
	{
		int j = 0;
		char c;
		while ((c = getchar()) != '\n')
			content[i][j++] = c;
		content[i][j] = '\0';
	}
	puts("output content:");
	for (int i = 0; i < N; i++)
		puts(content[i]);
}
void sort_cmp(char *content[], int count)
{
	char *temp;
	for (int i = 0; i<count - 1; i++)
		for (int j = i + 1; j < count; j++)
			if (strcmp(content[i],content[j]))
			{
				temp = content[i];
				content[i] = content[j];
				content[j] = temp;
			}
	 puts("strcmp sort:");
		for (int i = 0; i < N; i++)
			puts(content[i]);
}
void sort(char *content[], int count)
{
	char *temp=0;
	for(int i=0;i< count-1;i++)
		for (int j = i + 1; j < count; j++)
			if (strlen(content[i]) > strlen(content[j]))
			{
				temp = content[i];
				content[i] = content[j];
				content[j] = temp;
			}
	puts("length sort:");
	for (int i = 0; i < N; i++)
		puts(content[i]);
}
void sort_first(char *content[], int count)
{
	char *temp=0;
	for (int i = 0; i<count - 1; i++)
		for (int j = i + 1; j < count; j++)
			if (content[i][0] > content[j][0])
			{
				temp = content[i];
				content[i] = content[j];
				content[j] = temp;
			}
	puts("first_char sort:");
	for (int i = 0; i < count; i++)
		puts(content[i]);
}
void main()
{
	char content[N][M];
	char *p[N];
	for (int i = 0; i < N; i++)
		p[i] = content[i];
	input(content);
	sort(p, N);
	sort_first(p, N);
	sort_cmp(p,N);
}