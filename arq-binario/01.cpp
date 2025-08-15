#include <stdio.h>

	typedef struct{
		char nome [50];
		int idade;
		char email [50];
	}pessoa;
	
	pessoa p1;
	
	void leitura(pessoa *p1){
		printf("leitura dos dados");
		printf("\n nome: ");
		gets(p1->nome);
		printf("\n email: ");
		gets(p1->email);
		printf("\n idade: ");
		scanf("%d", &p1->idade);
		
	}
	int main(){
		FILE *arq;
		leitura(&p1);
		
		arq = fopen ("pessoas.dat", "wb");
		fwrite (&p1, sizeof(p1), 1, arq);
		fclose(arq);
		
		arq = fopen ("pesoas.dat", "rb");
		fread(&p1,sizeof(p1),1,arq);
		printf("nome: %s email: %s idade:%d\n",p1.nome, p1.email,p1.idade);
		fclose(arq);
	}