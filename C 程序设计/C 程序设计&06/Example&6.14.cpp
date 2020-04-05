#include <stdio.h>
int main(void)
{
	char str1[5], str2[5];
	puts("enter str1:");
	gets_s(str1);
	puts("enter str2:");
	gets_s(str2);
	for (int i = 0; i < 5; i++)
		if (str1[i] != str2[i])
		{
			printf("%d\n", int(str2[i]) - (int)str1[i]);
			break;
		}
}