#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 30
void main()
{
	int i=0;
	char c,content[N];
	while ((c=getchar()) != '\n')
	{
		if (isalpha(c))
			content[i] = c;
		else
			content[i] = ' ';
		++i;
	}
	content[i] = '\0';
	puts(content);
}