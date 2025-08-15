#include <stdio.h>

int main()
{
	int ra, idade, n, maiori, i, maiorra, menori, menorra;
	maiori = 0;
	menori = 200;
	printf("Insira o numero de alunos: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		printf("insira a idade: ");
		scanf("%d", &idade);
		printf("insira o ra: ");
		scanf("%d", &ra);
		
		if (maiori<idade)
		{
			maiori = idade;
			maiorra = ra;
		}
		
		if (menori>idade)
		{
			menori = idade;
			menorra = ra;
		}
		
	}
	
	printf("maior:\n");
	printf("idade: %d\n", maiori);
	printf("ra: %d\n", maiorra);
	
	printf("menor:\n");
	printf("idade: %d\n", menori);
	printf("ra: %d\n", menorra);
	
}