//#include<stdio.h>
//void main()
//{
//	int x;
//	puts("enter 0-100:");
//	scanf("%d", &x);
//	if (x <= 100 && x >= 90)
//		putchar('A');
//	else if (x <= 89 && x >= 80)
//		putchar('B');
//	else if (x <= 79 && x >= 70)
//		putchar('C');
//	else if (x <= 69 && x >= 60)
//		putchar('D');
//	else
//		putchar('E');
//}
#include<stdio.h>
int main()
{
	float score;
	char grade;
	printf("������ѧ���ĳɼ���");
	scanf("%f", &score);
	while (score > 100 || score < 0)
	{
		printf("\n��������������!");
		scanf("%f", &score);
	}
	switch ((int)(score/10))
	{
	case 10:
	case 9:grade = 'A'; break;
	case 8:grade = 'B'; break;
	case 7:grade = 'C'; break;
	case 6:grade = 'D'; break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:grade = 'E'; break;
	}
	printf("�ɼ���:%5.1f,��Ӧ�ĵȼ���:%c\n", score, grade);
	return 0;
}