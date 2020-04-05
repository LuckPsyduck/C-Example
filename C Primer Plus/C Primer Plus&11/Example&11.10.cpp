#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 20
void delete_space(char *content)
{
	for (int i = 0; i < strlen(content); i++)
		if (!isspace(content[i]))
			printf("%c", content[i]); 
	printf("\n");
}
void main()
{
	char content[N];
	gets_s(content);
	delete_space(content);
}