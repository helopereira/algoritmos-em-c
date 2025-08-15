#include <stdio.h>

void diagonal(int matriz[][10], int n){
		int i,j,aux=0;
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i!=j){
					if(matriz[i][j]!=0){
						aux++;
					}
				}
			}
		}
		
		if(aux==0){
			printf("eh uma matriz diagonal\n");
		}
		
		
		else if(aux!=0){
			printf(" nao eh uma matriz diagonal\n");
		}
}

void identidade(int matriz[][10], int n){
		int i,j,aux;
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if((i==j)&&(matriz[i][j]!=1)){
					aux++;
				}
				else if((i!=j)&&(matriz[i][j]!=0)){
					aux++;
				}
			}
		}
		
		if(aux==0){
			printf("eh uma matriz identidade\n");
		}
		
		
		else if(aux!=0){
			printf(" nao eh uma matriz identidade\n");
		}
}

void idempotente(int matriz[][10], int n){
		int i,j,aux=0;
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if((matriz[i][j]!=0)){
					if(matriz[i][j]!=1){
						aux++;
					}	
				}
			}
		}
		
		if(aux==0){
			printf("eh uma matriz idempotente\n");
		}
		
		
		else if(aux!=0){
			printf(" nao eh uma matriz idempotente\n");
		}
}

void antissimetrica(int matriz[][10], int n){
		int i,j,aux=0;
		int transposta[10][10];
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				transposta[j][i]=matriz[i][j];
			}
		}
		
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(transposta[i][j]!=(matriz[i][j]*-1)){
					aux++;
				}
			}
		}
		
		if(aux==0){
			printf("eh uma matriz antissimetrica\n");
		}
		
		
		else if(aux!=0){
			printf(" nao eh uma matriz antissimetrica\n");
		}
}

int main(){
	int matriz[10][10];
	int i,j,n;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	diagonal(matriz,n);
	identidade(matriz,n);
	idempotente(matriz,n);
	antissimetrica(matriz,n);
	
}