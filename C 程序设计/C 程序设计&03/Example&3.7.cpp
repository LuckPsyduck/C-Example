#include<stdio.h>
#define PI 3.1415
void main()
{
	double r, h;
	scanf("%lf,%lf", &r, &h);
	//printf("%f,%f,%f,%f\n", 2 * PI*r, PI*r*r, 4 * PI*r*r, (4.0 / 3)*PI*r*r*r);
	printf("%6.2lf,%6.2lf,%6.2lf,%6.2lf\n", 2 * PI*r, PI*r*r, 4 * PI*r*r, (4.0 / 3)*PI*r*r*r);
	printf("%6.2lf\n", PI*r*r*h);
}