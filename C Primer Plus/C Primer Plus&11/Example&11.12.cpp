#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 20
void main()
{
	char content[N],c;
	int i = 0, count_num=0, count_upper=0, count_lower=0, count_punct=0;
	while ((c = getchar()) != '\n')
		content[i++] = c;
	content[i] = '\0';
	for (int j = 0; j < strlen(content); j++)//zi fu chuan 
		if (isalnum(content[j]))
			count_num++;
		else if (isupper(content[j]))
			count_upper++;
		else if (islower(content[j]))
			count_lower++;
		else
			count_punct++;
	printf("%3d%3d%3d%3d\n", count_num, count_upper, count_lower, count_punct);
}
//void vocub(char *content)
//{
//
//}