//#include<stdio.h>
//#include<string.h>
//#define N 2
//#define M 5
//void main()
//{
//	char content1[N][M];//content[N][M]
//	char *p[N];
//	char *temp;
//	for(int i = 0; i < N; i++)
//		gets_s(content1[i]);
//		//fgets(content1[i],M, stdin);
//	for (int i = 0; i<N; i++)
//		p[i] = content1[i];
//	for (int i = 0; i<N - 1; i++)
//		for (int j = 0; j < N - 1 - i; j++)
//		{
//			if (strcmp(p[j], p[j + 1])>0)
//			{
//				temp = p[i];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//		}
//	for (int i = 0; i < N; i++)
//		printf("%s\n", p[i]);
//}

#include<stdio.h>
#include<string.h>
void sort(char *s[])
{
	char *temp;
	for(int i=0;i<9;i++)
		for(int j=0;j<9-i;j++)
			if (strcmp(*(s + j), *(s + j + 1)) > 0)
			{
				temp = *(s + j);
				*(s + j) = *(s + j + 1);
				*(s + j + 1) = temp;
			}
}
void main()
{
	char *p[10], str[10][20];
	for (int i = 0; i < 10; i++)
		p[i] = str[i];
	printf("input 10 strings:\n");
	for (int i = 0; i < 10; i++)
		scanf("%s", p[i]);
	sort(p);
	printf("now the sequence is:\n");
	for (int i = 0; i < 10; i++)
		printf("%s\n", p[i]);
}