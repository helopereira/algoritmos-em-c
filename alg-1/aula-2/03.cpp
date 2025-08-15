#include <stdio.h>

int main()
{
	char conc; 
	
	printf("insira o conceito: ");
	scanf("%c", &conc);
	
	switch(conc)
	{
		case 'A': printf("Significado: Exelente"); break;
		case 'B': printf("Significado: Otimo"); break;
		case 'C': printf("Significado: Bom"); break;
		case 'D': printf("Significado: Regular"); break; 
		case 'E': printf("Significado: Ruim"); break;
		case 'F': printf("Significado: Reprovado"); break;
	}
	
	return 0;
}