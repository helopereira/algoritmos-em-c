#include <stdio.h>

int main () 
{

	float soma, d,m1, m2;
 
	soma=0; 
	
	for(m1=37, m2=38, d=1; m1>=1, m2>=2, d<=37; d++, m1--, m2--)
	{
		soma = soma + (m1 * m2) / d; 
	}
	
	printf("%.1f\n", soma);
}