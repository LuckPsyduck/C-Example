#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	printf("�뽫�ļ������뵽������!\n");
	FILE *p1, *p2,*p3;
	if ((p1 = fopen(argv[1], "wb")) == NULL)
	{
		fprintf(stderr, "�ļ�д��ʧ��!");
		exit(EXIT_FAILURE);
	}

	printf("�������ַ�������#������\n");
	char ch;
	ch = getchar();
	while (ch != '#')
	{ 
		fputc(ch, p1);
		ch = getchar();
	}


	
	if ((p2 = fopen(argv[2], "wb")) == NULL)
	{
		fprintf(stderr, "�ļ�д��ʧ��!");
		exit(EXIT_FAILURE);
	}

	if ((p3 = fopen(argv[1], "rb")) == NULL)
	{
		fprintf(stderr, "�ļ�����ʧ��!");
		exit(EXIT_FAILURE);
	}
	/*char ch;*/
	
	while ((ch=fgetc(p3))!= EOF)//�˴�ִ�в���
	{
		fputc(toupper(ch), p2);
		putchar(toupper(ch));
	}
	printf("\n");

	fclose(p1);
	fclose(p2);
	fclose(p3);
}

