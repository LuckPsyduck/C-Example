#include<stdio.h>
void print(int *num, int n);
void exchange(int *num, int n);
void main()
{
	int num[10];
	void (*p)(int *, int);
	p = print;
	(*p)(num, 10);
	p = exchange;
	(*p)(num, 10);
}
void print(int *num,int n)
{
	for (int i = 0; i < 10; i++)
		scanf("%d", &num[i]);
}
void exchange(int *num,int n)
{
	int min = num[0];
	for (int i = 1; i < 10; i++)
		min = min < num[i] ? min : num[i];
	for (int i = 0; i < 10; i++)
		if (min == num[i])
		{ 
			int temp = num[0];
			num[0] = num[i];
			num[i] = temp;
			break;
		}
	for (int i = 0; i < 10; i++)
		printf("%d\t", num[i]);

}
