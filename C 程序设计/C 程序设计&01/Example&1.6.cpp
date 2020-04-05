//#include<stdio.h>
//void main()
//{
//	printf("please enter three integers!\n");
//	int max, MAX;
//	int integer[3];
//	for(int cout=0;cout<3;cout++)
//		scanf("%d", &integer[cout]);
//	max= integer[0] > integer[1] ? integer[0] : integer[1];
//	MAX = max > integer[2] ? max : integer[2];
//	printf("MAX=%d\n", MAX);
//}

#include<stdio.h>
int main()
{
	int a, b, c,max;
	printf("please input a,b,c:\n");
	scanf("%d,%d,%d", &a, &b, &c);
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("the largest number is %d\n", max);
	return 0;
}