//#include<stdio.h>
//#include<ctype.h>
//#define N 10
//void main()
//{
//	int al_count = 0, num_count = 0, tab_count = 0, other_count = 0;
//	char content[N];
//	puts("please some content:");
//	gets_s(content);//include ' ';
//	for (int i = 0; i < N; i++)
//	{
//		if (isdigit(content[i]))
//			num_count++;
//		else if (isalpha(content[i]))
//			al_count++;
//		else if (isblank(content[i]))
//			tab_count++;
//		else
//			other_count++;
//	}
//	printf("num_count=%d,al_count=%d,tab_count=%d,other_count=%d\n", \
//		num_count, al_count, tab_count, other_count);
//}
#include<stdio.h>
void main()
{
	char c;
	int letters = 0, space = 0, digit = 0, other = 0;
	printf("enter a line char:\n");
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
			letters++;
		else if (c == ' ')
			space++;
		else if (c >= '0'&&c <= '9')
			digit++;
		else
			other++;
	}
	printf("letters=%d\t space=%d\t digit=%d\t other=%d\n", letters, space, digit, other);
}