#include <stdio.h>

int main()
{
	int n;
	

	
	do{
		printf("insira um numero entre 1 e 4: ");
		scanf("%d", &n);
		
		if(n >=1 && n <= 4)
		{
		printf("%d%", n);
		}
		
		else(printf("entrada invalida.\n"));
	
	} while(n < 1 || n > 4);
	
	
}