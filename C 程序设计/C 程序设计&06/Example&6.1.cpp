//#include<stdio.h>
//void main()
//{
//	for(int i=2;i<=100;i++)
//	{ 
//		int count = 0;
//		for (int j = 2; j < i; j++)
//			if (i%j != 0)
//				++count;
//		if (count!=0&&count == i - 2)
//			printf("%d\t", i);
//	}
//	putchar('\n');
//}

#include<stdio.h>
#include<math.h>
void main()
{
	int a[101] ;
	for (int i = 1; i <= 100; i++)
		a[i] = i;
	a[1] = 0;
	for (int i = 2; i < sqrt(100); i++)
		for (int j = i + 1; j <= 100; j++)
			if(a[i]!=0&&a[j]!=0)
				if (a[j] % a[i] == 0)
					a[j] = 0;
	printf("\n");
	for (int i = 2, n = 0; i <= 100; i++)
	{
		if (a[i] != 0)
		{ 
			printf("%5d", a[i]);
			n++;
		}
		if (n == 10)
		{
			printf("\n");
			n = 0;
		}
	}
	printf("\n");
}