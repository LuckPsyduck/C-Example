#include<stdio.h>
#include<math.h>
void sin1(int x, int y)
{
	printf("%lf\n", -cos(y) + cos(x));
}
void cos1(int x, int y)
{
	printf("%lf\n", sin(y) - sin(x));
}
void exp1(int x, int y)
{
	printf("%lf\n", exp(y) - exp(x));
}
void fun(int x, int y, void (*p)(int x , int y ))
{
	(*p)(x, y);
}
void main()
{
	int x = 0, y = 1;
	int n;
	puts("enter n=:");
	scanf("%d", &n);
	if (n == 1)
		fun(0, 1, sin1);
	else if (n == 2)
		fun(0, 1, cos1);
	else if (n == 3)
		fun(0, 1, exp1);
	else
		puts("enter 1-3:");
}