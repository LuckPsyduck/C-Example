//#include<stdio.h>
//#include<ctype.h>
//#define N 10
//void main()
//{
//	int al_count = 0, AL_count = 0, num_count = 0, tab_count = 0, other_count = 0;
//	char content[N];
//	puts("please some content:");
//	for (int i = 0; i < N; i++)
//		scanf("%c", &content[i]);
//	for (int i = 0; i < N; i++)
//	{
//		if (isdigit(content[i]))
//			num_count++;
//		else if (islower(content[i]))
//			al_count++;
//		else if (isupper(content[i]))
//			AL_count++;
//		else if (isblank(content[i]))
//			tab_count++;
//		else
//			other_count++;
//	}
//	printf("num_count=%d,al_count=%d,AL_count=%d,tab_count=%d,other_count=%d\n", \
//		num_count, al_count, AL_count, tab_count, other_count);
//}

#include<stdio.h>
void main()
{
	char text[3][80];
	int upper = 0, low = 0, dig = 0, spa = 0, oth = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("please enter line %d:\n", i + 1);
		gets_s(text[i]);
		for (int j = 0; j < 80 && text[i][j] != '\0'; j++)
		{
			if (text[i][j] >= 'A'&&text[i][j] <= 'Z')
				upper++;
			else if (text[i][j] >= 'a'&&text[i][j] <= 'z')
				low++;
			else if (text[i][j] == ' ')
				spa++;
			else
				oth++;
		}
	}
	printf("upper = %d, low =  %d, dig =  %d, spa = %d, oth =  %d\n", upper, low, dig, spa, oth);
}
