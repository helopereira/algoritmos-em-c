#include <stdio.h>

int main ()
{
	int x, y, i, cubo;	
	
	printf("Insira seu intervalo: \n");
	scanf("%d%d", &x, &y);
	
	for (i=x; i<=y;i++)
	{
		cubo = i * i * i ;
		printf("%9d\n", cubo);
	}
}