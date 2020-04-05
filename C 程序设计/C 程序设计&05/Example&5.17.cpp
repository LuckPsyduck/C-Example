#include<stdio.h>
void main()
{
	char C1[3] = { 'A','B','C' };
	char C2[3] = { 'X','Y','Z' };
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (!((i == 0 && j == 0) || (i == 2 && j == 0) || (i == 2 && j == 2)))
				if (!((C1[i] == 'A'&&C2[j] == 'Y') || (C1[i] == 'B'&&C2[j]=='Y')|| (C1[i] == 'B'&&C2[j] == 'Z')))
					printf("%c-%c\n", C1[i], C2[j]);
}

//#include<stdio.h>
//void main()
//{
//	for (char i = 'x'; i <='z'; i++)
//		for (char j = 'x'; j <= 'z'; j++)
//			if (i != j)
//				for (char k = 'x'; k <='z'; k++)
//					if(i!=k&&j!=k)
//						if (i != 'x'&&k != 'x'&&k != 'z')
//							printf("a--%c\nb--%c\nc--%c\n", i, j, k);
//}