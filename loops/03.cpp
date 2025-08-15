#include <stdio.h>

int verifica(float vetor[], int n,float x){
	int i;
	
	for(i=0;i<n;i++){
		if(vetor[i]==x){
			return 1;
		}
	}
	return 0;
}

int main(){
	float vetor[20];
	float vetor2[10];
	int i,n,x,op;
	
	printf("leitura vetor 1 (20)\n");
	for(i=0;i<20;i++){
		scanf("%f", &vetor[i]);
	}
	
	printf("leitura vetor 2 (10)\n");
	for(i=0;i<10;i++){
		scanf("%f", &vetor2[i]);
	}
	
	for(i=0;i<10;i++){
		x=vetor2[i];
		op=verifica(vetor,20,x);
		if(op==1){
			printf(" %.0f", vetor2[i]);
		}
	}
}