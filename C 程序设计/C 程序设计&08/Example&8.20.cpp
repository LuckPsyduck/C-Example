#include<stdio.h>
#include<string.h>
#define N 2
#define M 5
void main()
{
	char content1[N][M];
	char *p[N];
	char *temp;
	for (int i = 0; i < N; i++)
		gets_s(content1[i]);
	/*fgets(content1[i],M, stdin);*/
	for (int i = 0; i<N; i++)
		p[i] = content1[i];
	for (int i = 0; i<N - 1; i++)
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (strcmp(p[j], p[j + 1])>0)
			{
				temp = p[i];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		} 
	char **p1;
	for (int i = 0; i < N; i++)
	{
		p1 = p + i;
		printf("%s\n", *p1);
	}
}