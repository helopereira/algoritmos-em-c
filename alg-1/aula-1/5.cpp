#include <stdio.h>

int main()
{
	int f1,f2,f3;
	
	printf("Insira a pontuacao do primeiro finalista: ");
	scanf("%d", &f1);
	printf("Insira a pontuacao do segundo finalista: ");
	scanf("%d", &f2);
	printf("Insira a pontuacao do terceiro finalista: ");
	scanf("%d", &f3);
	
	if ((f1>f2) && (f2>f3))
	{
		printf("O primeiro finalista ficou em primeiro lugar, o segundo finalista ficou em segundo lugar e o terceiro finalista ficou em terceiro lugar.");
	}
	
	else 
	if ((f1>f3) && (f3>f2))
	{
		printf("O primeiro finalista ficou em primeiro lugar, o terceiro finalista ficou em segundo lugar e o segundo finalista ficou em terceiro lugar.");
	}
	
	else 
	if ((f2>f1) && (f1>f3))
	{
		printf("O segundo finalista ficou em primeiro lugar, o primeiro finalista ficou em segundo lugar e o terceiro finalista ficou em terceiro lugar.");
	}
	
	else 
	if ((f2>f3) && (f3>f1))
	{
		printf("O segundo finalista ficou em primeiro lugar, o terceiro finalista ficou em segundo lugar e o primeiro finalista ficou em terceiro lugar.");
	}
	
	else 
	if ((f3>f2) && (f2>f1))
	{
		printf("O terceiro finalista ficou em primeiro lugar, o segundo finalista ficou em segundo lugar e o primeiro finalista ficou em terceiro lugar.");
	}
	
	else 
	if ((f3>f1) && (f1>f2))
	{
		printf("O terceiro finalista ficou em primeiro lugar, o primeiro finalista ficou em segundo lugar e o segundo finalista ficou em terceiro lugar.");
	}
	
	return 0;
}