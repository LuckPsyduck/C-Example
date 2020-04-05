#include<stdio.h>
#include<math.h>
void main()
{
	int sign = 1;
	int count = 0;
	double pi = 0.0, n = 1.0, term = 1.0;
	while (fabs(term) >= 1e-8)
	{
		pi += term;
		n += 2;
		sign = -sign;
		term = sign / n;
		count++;
	}
	pi = pi * 4;
	printf("pi=%10.8f\n", pi);
	printf("count=%d\n", count);
}