#include<stdio.h>
#include<math.h>
void main()
{
	int h = 100;
	float sum = 100;
	for (int i =1; i < 10; i++)
		sum +=2*(float) h / pow(2,i);
	printf("%f\t%f\n", sum, (float)h / pow(2, 10));
}