#include <stdio.h>
#include <string.h>
typedef struct{
	char nome[50];
	char musica[50];
	int integrantes;
	int ranking;
}banda;

#define MAX 100

void cadastrar(banda bandas[],int *cont){
	int i;
	
	printf("quantas bandas voce deseja cadastrar?");
	scanf("%d", &i);
	
	for(;i>0;i--){
		printf("insira o nome da banda: ");
		fflush(stdin);
		gets(bandas[*cont].nome);
		printf("insira o tipo de musica: ");
		fflush(stdin);
		gets(bandas[*cont].musica);
		printf("insira o numero de integrantes: ");
		scanf("%d", &bandas[*cont].integrantes);
		printf("insira sua posicao no ranking: ");
		scanf("%d", &bandas[*cont].ranking);
		if(bandas[*cont].ranking>5)bandas[*cont].ranking=0;
		printf(" contador %d", *cont);
		
		cont++;
		
		printf(" contador %d", cont);
	}
}

void busca_ranking(banda bandas[],int *cont){
	int i,j, flag=0;
	
	printf("insira o ranking que deseja buscar: ");
	scanf("%d", &i);
	
	for(j=0;j<=*cont;j++){
		if(bandas[j].ranking<=i && bandas[j].ranking!=0){
			printf("%s\n", bandas[j].nome);
			flag++;
		}
	}
	
	if(flag==0)printf("nao ha bandas nesse ranking!\n");
}

void busca_musica(banda bandas[],int *cont){
	char aux[50];
	int i,j,k=0,flag=0;
	
	printf("insira o estilo musical que deseja buscar: ");
	fflush(stdin);
	gets(aux);
	
	for(j=0;j<=*cont;j++){
		if(strcmp(bandas[j].musica, aux)==0){
				printf("%s\n", bandas[j].nome);
				flag++;
		}
	}
	
	
	if(flag==0)printf("nao ha bandas com esse estilo musical!\n");
}

void banda_favorita(banda bandas[],int *cont){
	char aux[50];
	int i,j,flag=0;
	
	printf("insira o nome da banda que deseja buscar: ");
	fflush(stdin);
	gets(aux);
	
	for(j=0;j<=*cont;j++){
		if(bandas[j].ranking<=5 && bandas[j].ranking!=0 ){
			if(strcmp(bandas[j].nome, aux)==0){
					printf("esta entre as favoritas\n");
					flag++;
			}
		}
		
	}
	
	if(flag==0)printf("nao esta entre as favoritas!\n");
}

int main(){
	char x;
	banda aux[MAX];
	int cont;
	cont = 0;
	do{
		printf("cont %d", cont);
		printf("selecione a opcao que deseja executar:\n");
		printf("1 - cadastrar\n");
		printf("2 - buscar por ranking\n");
		printf("3 - buscar por estilo musical\n");
		printf("4 - verificar se faz parte das suas favoritas\n");
		printf("s -sair\n");
		fflush(stdin);
		x = getchar();
		
		switch(x){
			
			case '1': cadastrar(aux, &cont);break;
			case '2': busca_ranking(aux, &cont);break;
			case '3': busca_musica(aux, &cont);break;
			case '4': banda_favorita(aux, &cont);break;
			case 's': return 0;
			default: printf ("selecione uma opcao valida.\n");
		}
	}while(x!='s');
	
}