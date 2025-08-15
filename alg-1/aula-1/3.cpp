#include <stdio.h>

int main()
{
	int n;
	float r1, r2;
	
	printf("Insira um numero: ");
	scanf("%d", &n);
	
	r1 = n%3;
	r2 = n%6;
	
	if (( r1 == 0 ) && (r2 == 0))
	{
		printf("O numero e divisivel por 3 e 6");
	}
	
	else
	
	if (( r1 > 0 ) && (r2 == 0))
	{
		printf("O numero e divisivel por 6");
	}
	
	else
	
	if (( r1 == 0 ) && (r2 > 0))
	{
		printf("O numero e divisivel por 3");
	}
	
	else
	
	if (( r1 > 0 ) && (r2 > 0))
	{
		printf("O numero nao e divisivel por 3 ou 6");
	}
	
	
	
	return 0;
}
	