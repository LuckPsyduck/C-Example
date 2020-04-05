#include<stdio.h>
#include<math.h>
void main()
{
	puts("please enter year:");
	int n;
	scanf("%d", &n);
	double P;
	switch (n)
	{
	case 5:P = 1000 * (1+5*0.0585); break;
	case 3:P = 1000 * (1 +3*0.054),P= P * (1 + 2*0.0468); break;
	case 2:P = 1000 * (1 + 2 * 0.0468), P = P * (1 + 3 * 0.054); break;
	case 1:P = 1000 * pow((1 + 0.0414), 5); break;
	case 0:P = 1000 * pow((1 + 0.0072 / 4), 20); break;
	default:puts("please enter 0,1,2,3,5"); break;
	}
	printf("%lf\n", P);
}