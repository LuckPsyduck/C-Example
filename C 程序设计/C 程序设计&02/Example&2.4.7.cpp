#include<stdio.h>
void main()
{
	int p, r, n, m, temp;
	puts("enter two integer n,m:");
	scanf("%d,%d", &n, &m);
	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	p = n*m;
	while (m != 0)
	{
		r = n%m;
		n = m;
		m = r;
	}
	printf("���Լ��:%d\n", n);
	printf("��С������:%d\n", p / n);
}