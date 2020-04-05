#include<stdio.h>
void fun(int n, int m);
void main()
{
	int m, n;
	puts("enter m n:");
	scanf("%d,%d", &m, &n);
	fun(n, m);
}

void fun(int n,int m)
{
	if (n < m)
	{
		int temp;
		temp = n;
		n = m;
		m = temp;
	}
	int p = m*n;
	int a;
	while (m != 0)
	{
		a = n%m;
		n = m;
		m = a;
	}
	printf("%d\n", n);
	printf("%d\n", p / n);
}