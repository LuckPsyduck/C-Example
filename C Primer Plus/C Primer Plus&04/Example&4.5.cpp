#include<stdio.h>
void main()
{
	puts("�����������ٶ�(Mb/s)���ļ���С(MB):");
	float v, c;
	scanf("%f,%f",&v,&c);
	printf("At %f megabits per second ,a file of %.2f megabytes down in %f seconds.\n", v,c, c*8 / v);
}