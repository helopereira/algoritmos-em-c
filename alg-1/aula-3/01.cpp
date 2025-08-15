#include <stdio.h>

int main()
{
	
	int a, b, soma, multi, i;
	
	soma=0;
	multi=1;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	for(i=a+1;i<b;i++)
	{
		printf("%d\n", i);
		if(i%2!=0)
		{
			soma=soma+i;
		}
		
		if(i%3==0)
		{
			multi= multi * i;
		}
	}
	
		printf("soma = %d%\n", soma);
		printf("multiplicacao = %d%", multi);
	
}