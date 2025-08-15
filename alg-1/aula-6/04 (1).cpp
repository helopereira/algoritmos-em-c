#include <stdio.h>
int main (){
	int matriz[10][10];
	int e,i,j, k=0;
	float M;
	int maior[10], mn=0;
	float sc=0, media[10], media2=0;
	int dp[10];
	
	do{
		scanf("%f", &M);
	}while(M>10);
	
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("(1)VETOR COM MAIORES NUMEROS\n");
	printf("(2)VETOR COM MEDIA\n");
	printf("(3)VETOR COM DIAGONAL\n");
	printf("(4)MEDIAS\n");
	scanf("%d", &e);
	
	switch(e){
		
		case(1):
			
			for(i=0;i<M;i++){
				for(j=0;j<M;j++){
					if(matriz[i][j]>mn){
						mn=matriz[i][j];
					}
				}
				
				maior[k]=mn;
				k++;
			}
				
			for(i=0;i<k;i++){
				printf("%d ", maior[i]);
			}
			
		break;
		
		case(2):
			
			k=0;
			
			for(j=0;j<M;j++){
				for(i=0;i<M;i++){
					sc=sc+matriz[i][j];
				}
				media[k]=sc/M;
				k++;
				sc=0;
			}
			
			for(i=0;i<k;i++){
				printf("%.1f ", media[i]);
			}
		
		break;
		
		case(3):
			
			k=0;
			
			for(i=0;i<M;i++){
				for(j=0;j<M;j++){
					if(i==j){
						dp[k]=matriz[i][j];
						k++;
					}
				}
			}
			
			for(i=0;i<k;i++){
				printf("%d ", dp[i]);
			}
			
		break;
		
		case(4):
			
			for(i=0;i<M;i++){
				for(j=0;j<M;j++){
					media2=media2+matriz[i][j];
				}
				
				media2=media2/M;
				printf("Media linha %d = %.1f\n", i, media2);
				media2=0;
			}
			
			for(i=0;i<M;i++){
				for(j=0;j<M;j++){
					if(i==j){
						media2=media2+matriz[i][j];
					}
				}
			}
			media2=media2/M;
			printf("Media diagonal = %.1f\n", media2);
			
		break;
	}
		

}