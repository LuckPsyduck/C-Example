#include<stdio.h>
#include<math.h>
void main()
{
	double m = -10,n=10;
	double temp, ft;
	double fa = 2 * m*m*m - 4 * m*m + 3 * m - 6;
	double fb = 2 * n*n*n - 4 * n*n + 3 * n - 6;
	while (fabs(fa-fb) >=1e-4)
	{
		 temp = (m + n) / 2.0;
		 ft = 2 * temp*temp*temp - 4 * temp*temp + 3 * temp - 6;
		if (ft == 0)
			break;
		else if (fa*ft < 0)
		{ 
			n = temp;
			fb= 2 * n*n*n - 4 * n*n + 3 * n - 6;
		}
		else
		{
			m = temp; 
			fa = 2 * m*m*m - 4 * m*m + 3 * m - 6;
		}
	}
	printf("%lf\n", temp);
}
