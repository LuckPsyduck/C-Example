#include<stdio.h>
void main()
{
	puts("请输入里程和耗油量:");
	float m, l;
	scanf("%f,%f", &m, &l);
	printf("%.1f\n", (float)m / l);
}