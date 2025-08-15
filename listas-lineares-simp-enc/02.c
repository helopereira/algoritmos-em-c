#include <stdio.h>
#include <stdlib.h>

typedef struct reg{
	int info;
	struct reg *prox;
} *no;

void criar(no *lista){
	*lista = NULL;
}

void inserir_i(no *lista, int info){	
	no p = (no) malloc(sizeof(struct reg));
	p -> info = info;
	p -> prox = *lista;
	*lista = p;
}

void inserir_f(no *lista, int info){
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

void inserir(no *lista){
	no r = (no) malloc(sizeof(struct reg));
	no p,q,s;
	int info;
	
	printf("insira a info: ");
	scanf("%d", &info);
	
	r -> info = info;
	p=*lista;
	
	
	if(*lista==NULL){
			inserir_f(lista,info);
			return;
	}

	s=*lista;	
	if(info<s->info){
		inserir_i(lista,info);
		return;
	}
	
	while(p){
		q = p->prox;
		
		if(p->prox==NULL){
			inserir_f(lista,info);
			return;
		}
		
		if((q->info)>info){
			r -> prox = q;
			p -> prox = r;
			return;
		} 
		p = p -> prox;
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

int main(){
	char x;
	int a;
	no lista;
	criar(&lista);
	
	do{
		printf("menu\n\n");
		printf("a - inserir elemento\n");
		printf("b - imprimir\n");
		printf("s - sair\n");
	
		fflush(stdin);
		scanf("%c", &x);
		switch(x){
			case 'a': inserir(&lista);break;
			case 'b': imprimir(lista);break;
//			case 'c': inserir_i(&lista);break;
		}
	}while(x!='s');
}