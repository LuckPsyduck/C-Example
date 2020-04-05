#include<stdio.h>
void main()
{
	int content1[5][5],content2[5][5],content3[25],content4[25];
	int a = 0,b=0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{ 
			scanf_s("%d", &content1[i][j]);
			content2[i][j] = content1[i][j];
			content3[a++] = content1[i][j];
			content4[b++] = content1[i][j];
		}

	int temp = 0;
		for (int i = 0; i<25 - 1; i++)
			for (int j = i + 1; j <25; j++)
				if (content3[i] > content3[j])
				{
					temp = content3[i];
					content3[i] = content3[j];
					content3[j] = temp;
				}
	/*	for (int i = 0; i < 25 ; i++)
			printf("%d\t", content3[i]);*/

		int num[5];
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 25 ; j++)
				if (content3[i] == content4[j])
					num[i] = j;
		for (int j = 0; j < 5*5 ; j++)
			if (content3[5*5 - 1] == content4[j])
				num[4] = j;

		{
			int temp;
			temp =content2[2][2];
			content2[2][2] = content3[24];
			content2[num[4] / 5][num[4] % 5] = temp;
		}
		{
			int temp;
			temp = content2[0][1];
			content2[0][1] = content3[0];
			content2[num[0] / 5][num[0] % 5] = temp;
		}
		{
			int temp;
			temp = content2[0][4];
			content2[0][4] = content3[1];
			content2[num[1]/ 5][num[1] % 5 ] = temp;
		}
		{
			int temp;
			temp = content2[4][0];
			content2[4][0] = content3[2];
			content2[num[2] / 5][num[2] % 5 ] = temp;
		}
		{
			int temp;
			temp = content2[4][4];
			content2[4][4] = content3[3];
			content2[num[3] / 5][num[3] % 5 ] = temp;
		}


		
		/*
			temp = content2[2][2];
			content2[2][2] = content3[24];
			content2[num[4] / 5][num[4] % 5] = temp;
		
			temp = content2[0][1];
			content2[0][1] = content3[0];
			content2[num[0] / 5][num[0] % 5] = temp;
		
			temp = content2[0][4];
			content2[0][4] = content3[1];
			content2[num[1] / 5][num[1] % 5] = temp;
		
		
			temp = content2[4][0];
			content2[4][0] = content3[2];
			content2[num[2] / 5][num[2] % 5] = temp;
	
		
			temp = content2[4][4];
			content2[4][4] = content3[3];
			content2[num[3] / 5][num[3] % 5] = temp;*/
	

		for (int i = 0; i <5; i++)
		{ 
			for (int j = 0; j < 5; j++)
				printf("%d\t", content2[i][j]);
			putchar('\n');
		}
		putchar('\n');
}
