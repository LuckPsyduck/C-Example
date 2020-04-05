#include<stdio.h>
#include<string.h>
#include<stddef.h>
#define N 20
void is_within(char *content, char c)
{
	for(int i=0;i<strlen(content);i++)
		if(content[i]==c)
		{ 
			printf("exist!\n");
			break;
		}
}
void main()
{
	char content[N],c;
	char *p;
	p = content;
	puts("input content:");
	fgets(content, N - 1, stdin);
	puts("c:");
	scanf("%c", &c);
	is_within(content, c);
	//p=strchr(content, c);
	//printf("%d\n", (ptrdiff_t)( p-content));
}