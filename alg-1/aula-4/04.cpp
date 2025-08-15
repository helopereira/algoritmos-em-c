#include <stdio.h>

int main()
{
	int r1, r2, r3, g1, g2, g3, acertos, all;
	
	
	all=0;
	
	printf("Insira seu gabarito: \n");
	scanf("%d %d %d", &g1, &g2 ,&g3);

	do
	{
		acertos=0;
		
		printf("Insira a resposta do aluno: \n");
		scanf("%d %d %d", &r1, &r2 ,&r3);
		
		if(r1==g1)
		{
			acertos = acertos+1;
		}
		
		if(r2==g2)
		{
			acertos = acertos+1;
		}
		
		if(r3==g3)
		{
			acertos = acertos+1;
		}
		
		if(acertos==3)
		{
			all = all + 1;
		}
		
		printf("acertos: %d\n", acertos);
		
	}while(r1!=0 && r1!=0 && r3!=0);
	
	printf("%d acertaram todas.", all); 
}