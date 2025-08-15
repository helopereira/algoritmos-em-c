#include <stdio.h>
int main (){
	int poltronas[100];
	int i;
	
	do{
		printf("Insira a posicao que voce deseja comprar (0-99) ou 100 para sair:\n");
		scanf("%d", &i);
		
		if(poltronas[i]==0){
			printf("Compra efetuada.\n");
			poltronas[i]=1;
		}
		
		else{
			printf("Poltrona Ocupada. Nao foi possivel comprar.\n");
		}
	}while(i<100);
}
	