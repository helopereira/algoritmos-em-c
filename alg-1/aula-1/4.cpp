#include <stdio.h>

int main()
{
	int idade;
	
	printf("Insira a idade: ");
	scanf("%d", &idade);
	
	if(idade>=10 && idade<=18)
	{
		printf("Esta compreendida no intervalo");
	}
	
	else
	{
		printf("Nao esta compreendida no intervalo");
	}
	
	
	return 0;
}