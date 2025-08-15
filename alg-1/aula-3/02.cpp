#include <stdio.h>

int main ()
{
	double f, c, i;
	
	c = 50; 
	
	for(i=c;i<=65; i+=0.5)

	{
		printf("%9.2lf", i);
		f = i * 1.8 + 32;
		printf("%9.2lf\n", f);
	}
}