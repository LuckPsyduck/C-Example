#include<stdio.h>
#include<math.h>
float solut(float a, float b, float c, float d)
{
	float x = 1, x0, f, f1;
	do
	{
		x0 = x;
		f = a * x*x*x + b*x*x + c*x + d;
		f1 = 3 * a*x*x + 2 * b*x + c;
		x = x0 - f / f1;
	} while (fabs(x - x0) >= 1e-3);
	return x;
}
int main()
{
	float a, b, c, d;
	printf("input a,b,c,d:");
	scanf("%f,%f,%f,%f", &a, &b, &c, &d);
	printf("x=%10.7f\n", solut(a, b, c, d));
}