#include <stdio.h>

int main()
{
	int idade, op, i, bom, otimo, regular, soma;
	float media, porc;
	
	soma = 0;
	regular = 0;
	otimo = 0;
	bom = 0;
	
	for (i=1; i<=15;i++)
	{
		printf("insira sua idade:\n");
		scanf("%d", &idade);
		printf("insira sua opiniao:\n");
		scanf("%d", &op);
		
		if(op==1)
		{
			regular= regular + 1;
		}
		
		if(op==2)
		{
			bom= bom + 1;
			porc = (bom * 100) / 15; 
		}
		
		if(op==3)
		{
			otimo= otimo + 1;
			soma = soma + idade; 
			media = soma / otimo;
		}
		
		
		
		
		
	}
	
	printf("regular= %d%\n", regular);
	printf("bom= %d%\n", bom);
	printf("otimo= %d%\n", otimo);
	printf("media= %.2lf%\n", media);
	printf("porcentagem= %.2f%\n", porc);
}
