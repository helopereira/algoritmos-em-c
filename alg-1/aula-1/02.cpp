#include <stdio.h>

int main ()
{
	
	int HE, HF, H;
	
	printf("Insira a quantidade de horas extras: ");
	scanf("%d", &HE);
	printf("Insira a quantidade de horas faltas: ");
	scanf("%d", &HF);
	
	H = HE - 2/3 * HF;
	
	if (H > 40)
	{
		printf("Sua gratificacao e de R$ 500,00");
	}

	else if (H >= 30 && H <= 40 )
		{
			printf("Sua gratificacao e de R$ 400,00");
		}
		
	else if (H >= 20 && H <= 30 )
		{
			printf("Sua gratificacao e de R$ 300,00");
		}	
		
	else if (H >= 10 && H <= 20 )
		{
			printf("Sua gratificacao e de R$ 200,00");
		}
		
	else if (H > 10)
		{
			printf("Sua gratificacao e de R$ 100,00");
		}
		
	return 0;
}