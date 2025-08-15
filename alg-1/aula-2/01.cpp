#include <stdio.h>

int main()
{
	int cod, sal;
	
	printf("Insira o codigo correspondente ao cargo: ");
	scanf("%d", &cod);
	printf("Insira o salario: ");
	scanf("%d", &sal);
	
	switch (cod)
	{
		case 1: sal = sal * 0.5 ; printf("Escrituario: Aumento de R$ %d%", sal); break;
		case 2: sal = sal * 0.35; printf("Secretario: Aumento de R$ %d%", sal); break;
		case 3: sal = sal * 0.2; printf("Caixa: Aumento de R$ %d%", sal); break;
		case 4: sal = sal * 0.1; printf("Gerente: Aumento de R$ %d%", sal); break;
		case 5: sal = 0 ; printf("Diretor: Aumento de R$ %d%", sal); break;
	}
	
	return 0;
	
}