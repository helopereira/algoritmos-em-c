#include <stdio.h>

void ler (int matriz[][5]){
	int i, j;
	
	printf("INSIRA OS ELEMENTOS DA MATRIZ\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
}

void linha (int vetor [5], int matriz[][5], int x){
	int i, j;
	
	for(i=x,j=0;j<5;j++){
			vetor [j] = matriz[i][j];
		}
}

void exibir (int vetor[5]){
	int j;
	
	for(j=0;j<5;j++){
			printf(" %d", vetor[j]);
		}
}
int main(){
	int matriz[5][5];
	int  x;
	int vetor[5];
	
	ler(matriz);
	
	printf("INSIRA A LINHA\n");
	scanf("%d", &x);
	
	linha (vetor,matriz,x);
	exibir(vetor);
}