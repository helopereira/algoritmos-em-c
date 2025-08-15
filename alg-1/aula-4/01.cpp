#include <stdio.h>

int main ()
{
	float soma, n, d;
	soma=0;
	
	for(n=1, d=1; n<=99, d<=50; n+=2, d++)
	{
		soma = soma + n/d;
	}
	
	printf("%.1f\n", soma);
}