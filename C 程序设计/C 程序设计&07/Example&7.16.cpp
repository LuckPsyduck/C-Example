//#include<stdio.h>
//#include<math.h>
//#define N 10
//void main()
//{
//	int m, num[N] = {0};
//	scanf_s("m=%d", &m);
//	int i = 0;
//	while (m)
//	{
//		num[i++] = m % 10;
//		m = m /10;
//	}
//	int sum = 0;
//	for (int j = i-1; j >= 0; j--)
//		sum += num[j] * pow(16,j);
//	printf("%d\n", sum);
//}

#include<stdio.h>
#include<string.h>
#define MAX 100
int htoi(char s[])
{
	int n=0;
	for (int i = 0; i<strlen(s); i++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
			n = n * 16 + s[i] - '0';//分成每个字符单独计算
		if(s[i]>='a'&&s[i]<='f')
			n = n * 16 + s[i] - 'a'+10;
		if (s[i] >= 'A'&&s[i] <= 'F')
			n = n * 16 + s[i] - 'A' + 10;
	}
	return n;
}

void main()
{
	char t[MAX];
	char c, i=0;
	printf("input a HEX number:");
	while ((c = getchar()) != '\n'&&i < MAX)
	{
		if (c >= '0'&&c <= '9' || c >= 'a'&&c <= 'f' || c >= 'A'&&c <= 'F')
			t[i++] = c;
	}
	printf("output a DECIMAL number:%d\n", htoi(t));
}