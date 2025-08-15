#include <stdio.h>

	struct livro{
		char titulo [50];
		char autor [50];
		int ano;
	};
	
	struct livro livros[10];
	
	void leitura(struct livro *livros){
		int i;
		char lixo[1];
		
		for(i=0;i<10;i++){
			printf("\n Cadastro de livro\n");
			printf("Titulo:\n");
			gets(livros[i].titulo);
			printf("Autor:\n");
			gets(livros[i].autor);
			printf("Ano de lancamento:\n");
			scanf("%d", &livros[i].ano);
			gets(lixo);
		}
	}
	
	void imprimir(struct livro *livros){
		int i;
		
		for(i=0;i<10;i++){
			printf("\n Cadastro de livro\n");
			printf("Titulo: %s\n", livros[i].titulo);
			printf("Autor: %s\n", livros[i].autor);
			printf("Ano de lancamento: %d\n", livros[i].ano);
		}
	}
	
	int main(){
		leitura(livros);
		imprimir(livros);
	}