#include<stdio.h>
void main()
{
	 float rain[2][12] = { {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.4,2.4,3.5,6.6,4.5},\
							{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.4,2.4,3.5,7.6,4.5} };
	 float (*p)[12];
	 p = rain;
	 printf("每年平均降水量：\n");
	 for (int i = 0; i < 2; i++)
	 {
		 float sum = 0.0;
		 for (int j = 0; j < 12; j++)
			 sum +=*(*(p+i)+j);
		 printf("%f\n", sum);
	 }
	 for (int i = 0; i < 12; i++)
	 {
		 float sum = 0.0;
		 for (int j = 0; j < 2; j++)
			 sum += *(*(p + j) + i);
		 printf("%f\t", sum);
	 }
	 printf("\n");
}

