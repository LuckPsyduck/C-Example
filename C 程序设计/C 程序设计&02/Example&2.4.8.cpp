#include<stdio.h>
#include<math.h>
void main()
{
	int a, b, c;
	printf("please enter a,b,c:");
	scanf("%d,%d,%d", &a, &b, &c);
	if (b*b - 4 * a*c == 0)
		printf("ʵ��Ϊ:%lf\n", (double)(-b) / (2 * a));
	else if (b*b - 4 * a*c < 0)
		printf("�޽�!\n");
	else if (b*b - 4 * a*c >0)
		printf("����:%lf\t%lf\n",((-b) + (double)sqrt(b*b - 4 * a*c)) / (2 * a), ((-b) - (double)sqrt(b*b - 4 * a*c)) / (2 * a));
}