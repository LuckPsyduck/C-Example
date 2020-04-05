#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>
#define N 10
int main()
{
	char content[N];
	char c;
	int i = 0;
	while (isdigit(c = getchar()))
	{
		content[i++] = c;
	}
	content[i] = '\0';
	printf("%d\n", atoi(content));
	return 0;
}