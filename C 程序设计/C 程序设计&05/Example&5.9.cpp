//#include<stdio.h>
//void main()
//{
//	int a=0;
//	while (++a<999)
//	{ 
//		int sum = 1;
//		for (int i =2; i < a; i++)
//			if (a % i == 0)
//				sum += i;
//		if (sum == a)
//			printf("%d\t", a);
//	}
//}

#include<stdio.h>
void main()
{
	int m, s, i;
	for (m = 2; m < 1000; m++)
	{
		s = 0;
		for (i = 1; i < m; i++)
			if ((m%i) == 0)
				s += i;
		if (s == m)
		{
			printf("%d,is factors are ", m);
			for (i = 1; i < m; i++)
				if ((m%i) == 0)
					printf("%4d", i);
			printf("\n");
		}
	}
}