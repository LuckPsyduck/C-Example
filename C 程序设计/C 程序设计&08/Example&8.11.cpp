//
#include<stdio.h>
#include<string.h>
void sort(char s[10][6])
{
	char *p, temp[10];
	p = temp;
	for(int i=0;i<9;i++)
		for (int j = 0; j < 9-i; j++)
			if (strcmp(s[j], s[j + 1]) > 0)
			{
				strcpy(p, s[j]);
				strcpy(s[j], s[j + 1]);
				strcpy(s[j + 1], p);
			}	
}
void main()
{
	char str[10][6];
	printf("input 10 string:\n");
	for (int i=0; i < 10; i++)
		scanf("%s", str[i]);
	sort(str);
	printf("now the sequence is:\n");
	for (int i = 0; i < 10; i++)
		printf("%s\n", str[i]);
}