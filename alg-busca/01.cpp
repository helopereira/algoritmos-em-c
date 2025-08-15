#include <stdio.h>
FILE *arq;

int busca_linear(int vet[],int n, int x){
	int i, cont=0;
	
	for(i=0;i<x;i++){
		cont++;
		if(vet[i]==n){
			return cont;
		}
	}
	
	return cont;
}

int busca_linearo(int vet[],int n, int x){
	int i,cont=0;

	for(i=0;i<x;i++){

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

int busca_binaria(int vet[],int n, int x){
	int i,cont=0, esq=0,dir=x-1,cent;

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
	int x, n, i,j;
	int vet [100];
	
	arq = fopen ("dados.txt","r");
	fscanf(arq,"%d %d",&x,&i);
	
	for(j=0;j<x;j++){
		fscanf(arq,"%d",&vet[j]);
	}
	
	for(j=0;j<=i;j++){
		fscanf(arq,"%d",&n);
		fread(&n,sizeof(int),1,arq);
		printf("buscando %d\n", n);
		printf("Busca linear: %d\n", busca_linear(vet,n,x));
		printf("Busca linear ordenada: %d\n", busca_linearo(vet,n,x));
		printf("Busca binaria: %d\n", busca_binaria(vet,n,x));
	}
	
	fclose(arq);
}