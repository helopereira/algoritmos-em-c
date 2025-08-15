#include <stdio.h>
#include <cmath>

int main()
{
	float c, xi, x1, dif; 
	
	printf("valor de c:\n");
	scanf("%f", &c);
	printf("valor inicial:\n");
	scanf("%f", &xi);
		
		do{
		
		x1 = 1.0/3.0 * (2 * xi + (c/ (xi * xi))); 
		dif= xi - x1;
		xi = x1;

		}while(fabs(dif) > 0.001);

	printf("%f", x1);
}