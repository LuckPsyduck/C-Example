//#include<stdio.h>
//#include<string.h>
//#define N 3
//#define M 10
//void main()
//{
//	char content[N][M];
//	int num[N];
//	for (int i = 0; i < N; i++)
//		fgets(content[i], M-1, stdin);
//	int max = strlen(content[0]);
//	for (int i = 1; i < N ; i++)
//		max = max > strlen(content[i]) ? max:strlen(content[i]);
//	for (int i = 0; i < N ; i++)
//		num[i] = strlen(content[i]);
//	for (int i = 0; i < N; i++)
//		if (max == num[i])
//			printf("%s\n", content[i]);
//}

#include<stdio.h>
#include<string.h>
int alphabetic(char c)
{
	if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'z'))
		return 1;
	else
		return 0;
}
int longest(char string[])
{
	int len = 0, length = 0, flag = 1, place = 0;
	int  point;
	for (int i = 0; i <= strlen(string); i++)
		if (alphabetic(string[i]))
			if (flag)
			{
				point = i;//当前单词的起始位置
				flag = 0;
			}
			else
				len++;
		else
		{
			flag = 1;
			if (len >= length)
			{
				length = len;
				place = point;
				len = 0;
			}
		}
	return place;//最长字符的开始处
}
void main()
{
	char line[100];
	printf("input one line :\n");
	gets_s(line);
	printf("the largest word is:");
	for (int i = longest(line); alphabetic(line[i]); i++)
		printf("%c", line[i]);
	printf("\n");
}

