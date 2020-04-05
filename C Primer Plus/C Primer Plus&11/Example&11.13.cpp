#include<stdio.h>
#include<string.h>
#define N 15
int main(int argc, char *argv[])
{
	puts("²ÎÊıÃüÁîreverse:");
	/*for (int i = 0; i < strlen(argv[1]); i++)
		printf("%c", argv[1][strlen(argv[1]) - 1 - i]);
	printf("\n");*/
	for (int i = 1; i < argc; i++)
		puts(argv[argc - i]);
}