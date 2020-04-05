#include<stdio.h>
void cpy(char s[], char c[])
{
	int i, j;
	for(i=0,j=0;s[i]!='\0';i++)
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || \
			s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
		{
			c[j] = s[i];
			j++;
		}
	c[j] = '\0';
}
void main()
{
	char str[80], c[80];
	printf("enter string:");
	gets_s(str);
	cpy(str, c);
	printf("the vowel letter are:%s\n", c);
}