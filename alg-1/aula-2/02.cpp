#include <stdio.h>

int main ()
{
	int x, d, p;
	
	printf("Insira um numero: ");
	scanf("%d", &x);
	
	d = x %10;
	p = x %2;
	
	switch(p)
	{
		case 0: printf("O numero %d termina com o digito %d e eh par.", x, d); break;
		default: printf("O numero %d termina com o digito %d e eh impar.", x, d); break;
	}
	
	
	return 0;
}