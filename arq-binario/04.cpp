#include <stdio.h>
FILE *arq;
typedef struct{
	int num;
	char nome[50];
	float saldo;
	int dia;
	int mes;
	int ano;
}conta;


void cadastro (){
	conta aux;
	
	arq = fopen("file.dat","ab");
	
	printf("cadastrar\n");
	printf("numero da conta: ");
	scanf("%d", &aux.num);
	fflush(stdin);
	printf("nome do cliente: ");
	gets(aux.nome);
	printf("saldo da conta: ");
	scanf("%f", &aux.saldo);
	printf("data da ultima operação (dd/mm/aa): ");
	scanf("%d/%d/%d", &aux.dia, &aux.mes, &aux.ano);
	
	if(fwrite(&aux, sizeof(conta), 1, arq) > 0) printf ("conta cadastrada!\n");
	else printf("conta nao cadastrada\n");
	
	fclose(arq);
}

void consulta (){
	int aux;
	conta aux2;
	
	arq = fopen("file.dat", "rb");
	printf("insira o numero da conta que deseja consultar: ");
	scanf("%d", &aux);
	
	while(fread(&aux2, sizeof(conta), 1, arq)){
		if(aux2.num==aux){
			printf("%s\n", aux2.nome);
			printf("%f\n", aux2.saldo);
			printf("%d/%d/%d\n\n", aux2.dia, aux2.mes, aux2.ano);
		}
	}
	
	fclose(arq);
}

void imprimir(){
	int aux;
	conta aux2;
	
	arq = fopen("file.dat", "rb");
	while(fread(&aux2, sizeof(conta), 1, arq)){
			printf("%s\n", aux2.nome);
			printf("%d\n", aux2.num);
			printf("%f\n", aux2.saldo);
			printf("%d/%d/%d\n\n", aux2.dia, aux2.mes, aux2.ano);
	}
	
	fclose(arq);
}

int main(){
	int a;
	
	while(a!=4){
	printf("menu\n");
	printf("1 cadastrar\n");
	printf("2 consultar\n");
	printf("3 imprimir tudo\n");
	printf("4 sair\n");
	scanf("%d", &a);
	
	switch(a){
		case 1: cadastro();break;
		case 2: consulta();break;
		case 3: imprimir();break;
		case 4: return 0;break;
		default: printf("selecione uma opcao valida\n");break;
	}	
	}
	
}