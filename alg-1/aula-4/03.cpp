#include <stdio.h>
int main ()
{
	int dia, mes, diasemana, primeiro;
		
	do
	{
		
		printf("Informe o mes:\n");
		scanf("%d", &mes);
		printf("informe o dia:\n");
		scanf("%d", &dia);
		printf("Quando caiu o primeiro dia do mes?\n");
		scanf("%d", &primeiro);
		
		if (dia<=31 || mes<=12)
		
		{
			diasemana = ((dia % 7) + primeiro) - 1 ;
			
			while(diasemana > 7)
			{
				diasemana = diasemana%7;
			}
			
			switch(diasemana)
			{
				case 1: printf("segunda\n");break;
				case 2: printf("terca\n");break;
				case 3: printf("quarta\n");break;
				case 4: printf("quinta\n");break;
				case 5: printf("sexta\n");break;
				case 6: printf("sabado\n");break;
				case 7: printf("domingo\n");break;
			}
		}
		
		else
		{
		printf("data invalida");
		}
		
		
		
	} while (dia != 0 && mes != 0);
	
		
	}
	


	

