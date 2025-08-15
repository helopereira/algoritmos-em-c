#include <stdio.h>

int diagonal (int n,int matriz[][10]){
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i!=j) && (matriz[i][j])!=0){
				return 0;
			}
		}
	}
	
	return 1;
}

int identidade (int n,int matriz[][10]){
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i==j) && (matriz[i][j])!=1){
				return 0;
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i!=j) && (matriz[i][j])!=0){
				return 0;
			}
		}
	}
	
	return 1;
}

int idempotente (int n,int matriz[][10]){
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(((matriz[i][j])!=1 ||matriz[i][j])!=0){
				return 0;
			}
		}
	}
	
	return 1;	
}

int antissimetrica (int n,int matriz[][10]){
	int i,j;
	int t[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			t[i][j]=matriz[j][i];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(t[i][j]!=(-matriz[i][j])){
				return 0;
			}
			
		}
	}
	return 1;
}

int main(){
	int matriz[10][10];
	int n,i,j;
	
	printf("insira o tamanho da matriz\n");
	do{
		scanf("%d", &n);
	}while(n>10);
	
	printf("insira os elementos da matriz\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%s", &matriz[i][j]);
		}
	}
	
	if(diagonal(n, matriz)==0){
		printf("n eh diagonal");
	}
	
	else if (diagonal(n, matriz)!=0){
		printf("eh diagonal");
	}
}