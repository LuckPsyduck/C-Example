//#include<stdio.h>
//#include<ctype.h>
//#define N 10
//void main()
//{
//	char content[N];
//	char temp[N];
//	fgets(content, N, stdin);
//	for (int i = 0; i < N; i++)
//		if (isdigit(content[i]))
//			temp[i] = content[i];
//		else    
//			temp[i] = ' ';
//	for (int i = 0; i < N; i++)
//		printf("%c", temp[i]);
//	printf("\n");
//}

#include<stdio.h>
void main()
{
	char str[50], *pstr;
	int *pa, a[10];
	printf("input string:\n");
	gets_s(str);
	pstr = str;
	pa = a;
	int i = 0,j=0,digit,k,c=1,ndigit=0,m;
	while (*(pstr + i) != '\0')
	{
		if ((*(pstr + i) >= '0') && (*(pstr + i)) <= '9')
			j++;
		else
		{
			if (j > 0)
			{
				digit = *(pstr + i - 1) - 48;
				k = 1;
				while (k < i)
				{
					c = 1;
					for (m = 1; m <= k; m++)
						c *= 10;
					digit += (*(pstr + i - 1 - k) - 48)*c;
					k++;
				}
				*pa = digit;
				ndigit++;
				pa++;
				j = 0;
			}
		}
		i++;
	}
	if (j > 0)
	{
		digit = *(pstr + i - 1) - 48;
		k = 1;
		while (k < j)
		{
			c = 1;
			for (m = 1; m <= k; m++)
				c = c * 10;
			digit = digit + (*(pstr + i - 1 - k) - 48)*c;
			k++;
		}
		*pa = digit;
		ndigit++;
		j = 0;
	}
	printf("there are %d number in the line,they are \n", ndigit);
	j = 0;
	pa = a;
	for (j = 0; j < ndigit; j++)
		printf("%d", *(pa + j));
	printf("\n");
}