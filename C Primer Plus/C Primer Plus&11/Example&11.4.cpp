#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 20
void main()
{
	char content[N];
	gets_s(content, 20);
	for (int i = 0; i < strlen(content); i++)
		if (!isalpha(content[i]))
			content[i] = ' ';
	puts(content);
}