#include<stdio.h>
void main()
{
	char * content[12] = { "january" ,"february","march" ,"april","may" ,\
		"june" ,"july" ,"august","september","octorber","november" ,"December" };
	int month;
	scanf_s("%d",&month);
	printf("%s\n",content[month - 1]);
}