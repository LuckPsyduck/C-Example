#include<stdio.h>
void main()
{
	int m = 1,j;
	for(int i=0;i<9;i++)
	{
		j = 2 * m + 2;
		m = j;
	}
	printf("j=%d\n", j);
}