#include <stdio.h>

int main ()
{
	int x, y, cubo, i;
	 
	printf("Insira seu intervalo: \n");
	scanf("%d%d", &x, &y);
	 
	 i = x;
	do{

		cubo = i * i * i ;
		printf("%9d\n", cubo);
		i = i+1;
	
	}while(i>=x && i<=y);
}