#include <stdio.h>
	int main(){
		int vetor[3];
		int i, aux;
		FILE *arqp , *arqi;
		
		printf("leitura: ");
		for(i=0;i<3;i++){
			scanf("%d", &vetor[i]);
		}
		
		arqp = fopen ("nump.dat", "wb");
		arqi = fopen ("numi.dat", "wb");
		
		for(i=0;i<3;i++){
			if(vetor[i]%2==0){
				fwrite (&vetor[i], sizeof(int),1,arqp);
				printf("REGISTROU PAR\n");
			}
			
			else{
				fwrite (&vetor[i], sizeof(int),1,arqi);
				printf("REGISTROU IMPAR\n");
			}	
		}
		
		fclose(arqp);
		fclose(arqi);
		
		printf("pares: ");
		arqp = fopen ("nump.dat", "rb");
			printf("%d ",aux);
		
		printf("impares: ");
		arqi = fopen ("numi.dat", "rb");
		while(fread (&aux,sizeof(int), 1,arqi))
			printf("%d ",aux);
		
		fclose(arqp);
		fclose(arqi);
		
		
	}