#include<stdio.h>
void main()
{
	puts("请输入身高和姓名:");
	char name[10];
	float figure;
	gets_s(name);
	scanf("%f", &figure);
	printf("%s,you are %.3f feet tall\n", name, figure);
	printf("%s,you are %e feet tall\n", name, figure);
}