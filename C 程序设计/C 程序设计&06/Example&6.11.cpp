#include<stdio.h>
void main()
{
	for (int i = 0; i < 5; i++)
	{ 
		char content[9] = { ' ' };
		for (int j = i; j < 5 + i; j++)
			content[j] = '*';
		for (int j = 0; j < 9; j++)
			printf("%c", content[j]);
		putchar('\n');
	}
}