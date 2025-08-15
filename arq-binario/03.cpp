#include <stdio.h>
#include <conio.h>

typedef struct{
	int cod;
	char desc[100];
	int quant;
	float valor;
	int existe;
}itens;


	void adicionar(){
		itens item;
		FILE *arq;
		
		arq = fopen("registro.dat", "wb");
		
		fflush(stdin);
		printf("\ndescricao: ");
		gets(item.desc);
		printf("codigo: ");
		scanf("%d", &item.cod);
		printf("quantidade: ");
		scanf("%d", &item.quant);
		printf("valor: ");
		scanf("%f", &item.valor);
		item.existe=1;
		
		
		fwrite(&item, sizeof(item), 1, arq);
		fclose(arq);
	}
	
	void consultar(){
		int cod, cont=0;
		itens aux;
		FILE *arq;

		arq = fopen("registro.dat","rb");
		printf("insira o codigo do produto:");
		scanf("%d", &cod);

		while(fread(&aux,sizeof(aux), 1,arq)==1){
			if(aux.existe && aux.cod==cod){
				printf("\ndescricao: %s\n", aux.desc);
				printf("codigo: %d\n", aux.cod);
				printf("quantidade: %d\n", aux.quant);
				printf("valor: %.2f\n\n", aux.valor);
				
				cont++;
			}
		}
		fclose(arq);
		if(cont==0)printf("produto nao existe\n");
	}
	
	void alterar(){
		int cod,cont=0;
		itens item;
		FILE *arq;

		arq = fopen("registro.dat","r+b");
		printf("insira o codigo do produto:");
		scanf("%d", &cod);

		while(fread(&item,sizeof(item), 1,arq)==1){
			if(item.existe && item.cod==cod){
				fflush(stdin);
				printf("\ndescricao: ");
				gets(item.desc);
				printf("codigo: ");
				scanf("%d", &item.cod);
				printf("quantidade: ");
				scanf("%d", &item.quant);
				printf("valor: ");
				scanf("%f", &item.valor);
				item.existe=1;
				
				fseek(arq,-sizeof(item),SEEK_CUR);
				fwrite(&item, sizeof(item), 1, arq);
				
				cont++;
			}
		}
		fclose(arq);
		if(cont==0)printf("produto nao existe\n\n");
	}
	
	void remover(){
		int cod,cont=0,aux;
		itens item;
		FILE *arq;

		arq = fopen("registro.dat","r+b");
		printf("insira o codigo do produto:");
		scanf("%d", &cod);

		while(fread(&item,sizeof(item), 1,arq)==1){
			if(item.existe && item.cod==cod){
				item.existe=0;

				fseek(arq,-sizeof(item),SEEK_CUR);
				fwrite(&item, sizeof(item), 1, arq);
				
				printf("produto excluido\n\n");
				cont++;
			}
		}
		fclose(arq);
		if(cont==0)printf("produto nao existe\n\n");
	}
	
	
	int menu(){
		char aux;
		
		do{
			printf("1-ADICIONAR\n");
			printf("2-CONSULTAR\n");
			printf("3-ALTERAR\n");
			printf("4-REMOVER\n");
			printf("5-SAIR\n");	
			aux=getch();
			
			switch(aux){
				case '1': adicionar();break;
				case '2': consultar();break;
				case '3': alterar();break;
				case '4': remover();break;
				case '5': break;
				default: printf("SELECIONE UMA OPCAO VALIDA\n");	
			}
		}while(aux!='5');
		
	}
	
	int main(){
		menu();
	}