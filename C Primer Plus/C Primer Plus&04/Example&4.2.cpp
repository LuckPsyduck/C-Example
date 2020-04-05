#include<stdio.h>
void main()
{
	puts("请输入名和姓:");
	char name_ming[5];
	char name_xing[5];
	gets_s(name_ming);
	gets_s(name_xing);//自动加\0
	puts("您输入的名和姓是:");
	printf("\"%20s%20s\"\n", name_ming, name_xing);//右对齐，默认
	printf("\"%-20s%-20s\"\n", name_ming, name_xing);//左对齐
	printf("\"%7s%7s\"\n", name_ming, name_xing);
}