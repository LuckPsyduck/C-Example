#include<stdio.h>
#include<ctype.h>
#define N 10
void find(char content[], int n);
void main()
{
	char content[N];
	puts("please some content:");
	for (int i = 0; i < N; i++)
		scanf("%c", &content[i]);
	find(content, N);
}
void find(char content[],int n)
{
	int al_count = 0, AL_count = 0, num_count = 0, tab_count = 0, other_count = 0;
	for (int i = 0; i < N; i++)
	{
		if (isdigit(content[i]))
			num_count++;
		else if (islower(content[i]))
			al_count++;
		else if (isupper(content[i]))
			AL_count++;
		else if (isblank(content[i]))
			tab_count++;
		else
			other_count++;
	}
	printf("num_count=%d,al_count=%d,AL_count=%d,tab_count=%d,other_count=%d\n", \
		num_count, al_count, AL_count, tab_count, other_count);
}