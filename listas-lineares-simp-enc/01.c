#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct reg{
	int info;
	struct reg *prox;
} *no;

void criar(no *lista){
	*lista = NULL;
}

void inserir_i(no *lista){
	int info;
	printf("insira a info: ");
	scanf("%d", &info);
	
	no p = (no) malloc(sizeof(struct reg));
	p -> info = info;
	p -> prox = *lista;
	*lista = p;
}

void inserir_f(no *lista){
	int info;
	printf("insira a info: ");
	scanf("%d", &info);
	no q = (no) malloc(sizeof(struct reg));
	q -> info = info;
	q -> prox = NULL;
	
	if(*lista==NULL){
		*lista=q;
		return;
	} 
	
	else{
		no p = *lista;
		
		while(p->prox){
		p = p -> prox;
		}
		p->prox=q;		
	}
}


void imprimir(no lista){
	no p = lista;
	printf("lista: ");
	while(p){
		printf("%d ", p->info);
		p = p ->prox;
	}
	printf("\n");
}

int contar(no lista){
	no p = lista;
	int cont = 0;
	while(p){
		cont++;
		p = p -> prox;
	}
	return cont;
}

void busca(no lista){
	no p = lista;
	int i;
	
	printf("insira o elemento que deseja buscar: ");
	scanf("%d", &i);
	
	while(p){
		if(p -> info == i){
			printf("esse elemento pertence a lista!\n");
			return;
		}
		
		p = p ->prox;
	}
	
	printf("esse elemento nao pertence a lista!");
	return;
}

void retornar_k(no lista){
	no p = lista;
	int k,cont;
	
	printf("insira k: ");
	scanf("%d", &k);
	
	while(p){
		cont++;
		if(cont==k){
			printf("elemento: %d\n", p -> info);
			return;
		} 
		p = p -> prox;
	}
	
	printf("nao esta na lista!\n");
}

void remover_p(no *lista){
	if(!*lista) return;
	
	no p = *lista;
	*lista = p -> prox;
	free(p);
}

void remover_k(no *lista){
	if(!*lista){
		printf("lista nula\n");
		return;
	} 
	
	int k, cont=0;
	no p = *lista;
	no q;
	printf("insira k: ");
	scanf("%d", &k);
	
	while(p){
		q = p->prox;
		if(cont==k-1){
			p -> prox= (p->prox) -> prox;
			free(q);
			return;
		} 
		
		
		p = p -> prox;
		cont++;
	}
	
	printf("nao esta na lista!\n");
}

void remover_u(no *lista){
	no p = *lista;
	
	while((p->prox)->prox){
		p = p->prox;
	}
	
	free(p->prox);
	p->prox=NULL;
}

void destruir(no *lista){
	if(!*lista) return;
	
	remover_p(lista);
	destruir(lista);
}


int main(){
	char x;
	int a;
	no lista;
	criar(&lista);
	
	do{
		printf("menu\n\n");
		printf("b - inserir no inicio\n");
		printf("c - inserir no fim\n");
		printf("f - imprimir lista\n");
		printf("g - contar nos\n");
		printf("h - busca\n");
		printf("i - retornar k-esimo\n");
		printf("j - remover o primeiro\n");
		printf("k - remover o ultimo\n");
		printf("l - remover um determinado elemento\n");
		printf("m - destruir lista\n");
		printf("s - sair\n\n");
		
		fflush(stdin);
		scanf("%c", &x);
		switch(x){
			case 'b': inserir_i(&lista);break;
			case 'c': inserir_f(&lista);break;
			case 'f': imprimir(lista);break;
			case 'g': printf("num de nos = %d\n", contar(lista));break;
			case 'h': busca(lista);break;
			case 'i': retornar_k(lista);break;
			case 'j': remover_p(&lista);break;
			case 'k': remover_u(&lista);break;
			case 'l': remover_k(&lista);break;
			case 'm': destruir(&lista);break;
		}
	}while(x!='s');
}