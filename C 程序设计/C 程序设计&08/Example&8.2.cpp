//#include<stdio.h>
//#include<string.h>
//#define N 3
//#define M 5
//void main()
//{
//	char content1[N][M];
//	char *p[N];
//	char *temp;
//	for (int i = 0; i < N; i++)
//		gets_s(content1[i]);
//	/*fgets(content1[i],M, stdin);*/
//	for (int i = 0; i<N; i++)
//		p[i] = content1[i];
//	for (int i = 0; i<N - 1; i++)
//		for (int j = 0; j < N - 1 - i; j++)
//		{
//			if (strcmp(p[j], p[j + 1])>0)
//			{
//				temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//		}
//	for (int i = 0; i < N; i++)
//		printf("%s\n", p[i]);
//}

#include<stdio.h>
#include<string.h>
void swap(char *p1, char *p2)
{
	char p[20];
	strcpy(p, p1);
	strcpy(p1, p2);
	strcpy(p2, p);
}

void main()
{
	char str1[20], str2[20], str3[20];
	printf("input three line:\n");
	gets_s(str1);
	gets_s(str2);
	gets_s(str3);
	if (strcmp(str1, str2) > 0) swap(str1, str2);
	if (strcmp(str1, str3) > 0) swap(str1, str3);
	if (strcmp(str2, str3) > 0) swap(str2, str3);
	printf("the order is:\n");
	printf("%s\n%s\n%s\n", str1, str2, str3);
}