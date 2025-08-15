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
void transposta (int matriz [][5],int matrizt [][5]){
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matrizt[i][j]=matriz[j][i];
		}
	}
}

void exibir (int matriz[][5]){
	int i, j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf(" %d", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(){
	int matriz [5][5];
	int matrizt [5][5];
	
	ler(matriz);

	transposta(matriz, matrizt);
	exibir(matriz);
	exibir(matrizt);
}