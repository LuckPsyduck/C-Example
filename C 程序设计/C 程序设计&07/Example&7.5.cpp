#include<stdio.h>
#define N 6
void main()
{
	char content1[N],content2[N];
	gets_s(content1);
	for (int i = 0; i < N - 1; i++)
		content2[i] = content1[N - i - 2];
	/*puts(content2);*/
	for (int i = 0; i < N - 1; i++)
		printf("%c", content2[i]);
	putchar('\n');
}

