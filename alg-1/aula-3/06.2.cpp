#include <stdio.h>

int main ()
{
	int x, y, cubo, i;
	
	printf("Insira seu intervalo: \n");
	scanf("%d%d", &x, &y);
	
	i=x;
	
	while (i>=x && i<=y)
	{
		cubo = i * i* i;
		i = i +1;
		printf("%9d\n", cubo);
	}
	
}