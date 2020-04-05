//#include<stdio.h>
//void main()
//{
//	char content1[5], content2[5], content3[10];
//	puts("enter content1:");
//	gets_s(content1);
//	puts("enter content1:");
//	gets_s(content2);
//	for (int i = 0; i < 5; i++)
//		content3[i] = content1[i];
//	for (int i = 5; i < 10; i++)
//		content3[i] = content2[i - 5];
//	for (int i = 0; i < 10; i++)
//		printf("%c", content3[i]);
//	putchar('\n');
//}

#include<stdio.h>
void main()
{
	char s1[80], s2[40];
	printf("input string1:");
	scanf("%s", s1);
	printf("input string2:");
	scanf("%s", s2);
	int i = 0;
	while (s1[i] != '\0')
		i++;
	int j = 0;
	while (s2[j] != '\0')
		s1[i++] = s2[j++];
	s1[i] = '\0';
	printf("\nthe new string is :%s\n", s1);
}