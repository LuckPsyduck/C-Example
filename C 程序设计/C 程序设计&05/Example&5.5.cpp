//#include<stdio.h>
//#include<math.h>
//void main()
//{
//	int n, a;
//	int count1 = 0, count2 = 0;
//	scanf("%d,%d", &n,&a);
//	for (int i = 0; i < n; i++) 
//	{
//		count1 += a*pow(10, i);
//		count2 += count1;
//	}
//	printf("count2=%d\n", count2);
//}

#include<stdio.h>
void main()
{
	int a, n, i = 1, sn = 0, tn = 0;
	printf("a,n=:");
	scanf("%d,%d", &a, &n);
	while (i <= n)
	{
		tn = tn + a;
		sn = sn + tn;
		a = a * 10;
		++i;
	}
	printf("a+aa+aaa+...=%d\n", sn);
}