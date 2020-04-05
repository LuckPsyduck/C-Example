#include<stdio.h>
#include<math.h>
void big(int a, int b, int c)
{
	printf("%lf,%lf", (-b + sqrt(b*b - 4 * a*c)) / (2 * a), (-b - sqrt(b*b - 4 * a*c)) / (2 * a));
}
void less(int a, int b, int c)
{
	printf("no outcome\n");
}
void equal(int a, int b, int c)
{
	printf("%lf\n", (double)-b / (2 * a));
}
void main()
{
	int a, b, c;
	scanf_s("%d,%d,%d", &a, &b, &c);
	int d = b*b - 4 * a*c;
	if (d == 0)
		equal(a, b, c);
	else if (d < 0)
		less(a, b, c);
	else
		big(a, b, c);
}