#include <stdio.h>
int main (){
	int M,N,i,j;
	int m[10][10];
	int mt[10][10];
	
	do{
	scanf("%d%d", &M, &N);
	}while(M>10 && N>10);
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d", &m[i][j]);
		}
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			mt[i][j]=m[j][i];
		}
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d", mt[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d", m[i][j]);
		}
		
		printf("\n");
	}
}