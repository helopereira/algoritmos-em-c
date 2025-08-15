#include <stdio.h>
int main(){

int matriz [3][3];
int matriz2 [3][3];
int x, i,j,k=1;
int jogadores;

for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz[i][j]=k;
			k++;
		}
	}

	printf("JOGO DA VELHA\n\n");
	
	printf("INSIRA A POSICAO EM QUE DESEJA MARCAR\n");

	printf("%d | %d | %d\n", matriz[0][0], matriz[0][1], matriz[0][2]);
	printf("----------\n");
	printf("%d | %d | %d\n", matriz[1][0], matriz[1][1], matriz[1][2]);
	printf("----------\n");
	printf("%d | %d | %d\n", matriz[2][0], matriz[2][1], matriz[2][2]);

}