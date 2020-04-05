#include<stdio.h>
#include<string.h>
void main()
{
	char name_ming[10], name_xing[10];
	scanf("%s %s", name_ming, name_xing);
	puts("output:");
	printf("%s %s\n", name_ming, name_xing);
	printf("%4d%6d\n", strlen(name_ming), strlen(name_xing));
}