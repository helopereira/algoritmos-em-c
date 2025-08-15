#include <stdio.h>

int busca_linear(int vet[],int n){
	int i, cont=0;
	
	for(i=0;i<5;i++){
		cont++;
		if(vet[i]==n){
			return cont;
		}
	}
	
	return cont;
}

int busca_linearo(int vet[],int n){
	int i,cont=0;

	for(i=0;i<5;i++){

		if(vet[i]==n){
			cont++;
			return cont;
		}
		
		if (vet[i]>n){
			cont ++;
			return cont;
		}
	
		cont++;
	}
		
		return cont;
}

int busca_binaria(int vet[],int n){
	int i,cont=0, esq=0,dir=4,cent;

	while(esq<=dir){	
		cent=(esq+dir)/2;

		if(vet[cent]==n){
			cont++;
			return cont;
		}
		
		if(vet[cent]>n){
			cont++;
			dir=cent-1;
		}
		
		if(vet[cent]<n){
			cont++;
			esq=cent+1;
		}
	}
	
	return cont;
}

int main(){
	int vet[]={1,2,3,4,5};
	int n;
	
	printf("Insira o numero que deseja buscar:");
	scanf("%d", &n);
	
	printf("Busca linear: %d\n", busca_linear(vet,n));
	printf("Busca linear ordenada: %d\n", busca_linearo(vet,n));
	printf("Busca binaria: %d", busca_binaria(vet,n));
}