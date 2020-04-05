#include<stdio.h>
#include<string.h>
#define N 20
void search(char *content1, char *content2)
{
	for (int i = 0; i < strlen(content1) - strlen(content2) + 1; i++)
	{
		int count = 0;
		for (int j = 0; j < strlen(content2); j++)
			if (content1[i + j] == content2[j])
				++count;
		if (count == strlen(content2))
			printf("occur :%d\n", i);
	}
}
void main()
{
	char content1[N], content2[N];
	puts("input content1:");
	fgets(content1, N - 1, stdin);
	puts("input content2:");
	fgets(content2, N - 1, stdin);
	search(content1, content2);
}