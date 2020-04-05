//#include<stdio.h>
//#include<stdlib.h >
//void new1(int n);
//int main()
//{
//	int m;
//	scanf_s("%d", &m);
//	new1(m);
//}
//void new1(int n)
//{
//	int *num;
//	num = (int *)malloc(n * sizeof(int));
//	free(num);
//}

#include<stdio.h>
#define NEWSIZE 1000
char newbuf[NEWSIZE];
char *newp = newbuf;
char *new1(int n)
{
	if (newp + n <= newbuf + NEWSIZE)
	{
		newp += n;
		return newp - n;
	}
	else
		return NULL;
}
void free(char *p)
{
	if (p >= newbuf&&p < newbuf + NEWSIZE)
		newp = p;
}