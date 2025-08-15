#include <stdio.h>

int main()
{
	int n;
	

	printf("insira um numero entre 1 e 4: ");
	scanf("%d", &n);
	
	while(n < 1 || n > 4)
	{
		printf("entrada invalida.\n");
		printf("insira um numero entre 1 e 4: ");
		scanf("%d", &n);
	}

	printf("%d%", n);
	
}