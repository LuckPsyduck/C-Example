#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define N 5
void main()
{
	char content[N];
	puts("please enter code:");
	for (int i = 0; i < N; i++)
		scanf("%c", &content[i]);
	for (int i = 0; i < N; i++)
	{
		if (islower(content[i]))
			content[i] = 97 + 122 - content[i];
		else
			content[i] = 65 + 90 - content[i];
		printf("%c", content[i]);
	}
	putchar('\n');
}