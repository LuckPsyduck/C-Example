#include<stdio.h>
void main()
{
	puts("������������:");
	char name_ming[5];
	char name_xing[5];
	gets_s(name_ming);
	gets_s(name_xing);//�Զ���\0
	puts("���������������:");
	printf("%s��%s\n", name_ming, name_xing);
}