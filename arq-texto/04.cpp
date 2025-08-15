#include <stdio.h>

int main(){
	FILE *arq;
	char nome[50];
	char arquivo[50];
	
	arq = fopen ("file.txt","r+");
	fscanf(arq, "%s", arquivo);
	printf("arquivo: %s\n", arquivo);
	fclose(arq);
	printf("insira o nome do arquivo: ");
	gets(nome);
	
	int value;
	value = rename ("file.txt", nome);
			
	if(value==0)printf("nome alterado\n");
	else printf("erro\n");
}	