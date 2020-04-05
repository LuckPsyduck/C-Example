#include<stdio.h>
void main()
{
	puts("请输入下载速度(Mb/s)和文件大小(MB):");
	float v, c;
	scanf("%f,%f",&v,&c);
	printf("At %f megabits per second ,a file of %.2f megabytes down in %f seconds.\n", v,c, c*8 / v);
}