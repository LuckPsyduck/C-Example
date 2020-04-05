#include<stdio.h>
void main()
{
	char content1[5], content2[5],content3[10];
	puts("enter content1:");
	gets_s(content1);
	puts("enter content1:");
	gets_s(content2);
	for (int i = 0; i < 5; i++)
		content3[i] = content1[i];
	for (int i = 5; i < 10; i++)
		content3[i] = content2[i - 5];
	for (int i = 0; i < 10; i++)
		printf("%c", content3[i]);
	putchar('\n');
}