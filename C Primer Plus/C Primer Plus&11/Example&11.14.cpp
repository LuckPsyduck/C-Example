#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
	printf("%.3lf\n", pow(atof(argv[1]),atoi(argv[2])));
}