//#include<stdio.h>
//void main()
//{
//	puts("请输入四位数:");
//	int m;
//	scanf_s("%d",&m);
//	printf("%d %d %d %d\n", m / 1000, m / 100 % 10, m / 10 % 10, m % 10);
//}

#include<stdio.h>
#include<string.h>
void insert(char str[])
{
	for (int i = strlen(str); i > 0; i--)
	{
		str[2 * i] = str[i];
		str[2 * i - 1] = ' ';
	}
	printf("output :\n%s\n", str);
}
void main()
{
	char str[10];
	printf("enter four digits:");
	scanf("%s", str);
	insert(str);
}