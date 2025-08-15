#include <stdio.h>
int main(){
	int notas[100];
	int aprovados[100];
	int reprovados[100];
	int media,contA=0,contR=0,i,j=0,x,k=0;
	
	scanf("%d", &x);
	
	for(i=0;i<x;i++){
		scanf("%d", &notas[i]);
	}
	
	for(i=0;i<x;i++){
		media=media+notas[i];
	}
	media=media/x;
	printf("media da classe: %d\n", media);
	
	for(i=0, j=0, k=0;i<x;i++){
		if(notas[i]>=7){
			contA++;
			aprovados[j]=notas[i];
			j++;
		}
		
		else if(notas[i]<7){
			contR++;
			reprovados[k]=notas[i];
			k++;
		}
		
	}
	
	printf("aprovados:");
		for(i=0;i<contA;i++){
			printf(" %d", aprovados[i]);
		}
		printf("\n");
		printf("total:%d\n", contA);
		printf("reprovados:");
		for(i=0;i<contR;i++){
			printf(" %d", reprovados[i]);
		}
		printf("\n");
		printf("total:%d\n", contR);
}