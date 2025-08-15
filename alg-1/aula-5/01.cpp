#include <stdio.h>
int main(){
	int vetor[10];
	int positivos[10];
	int negativos[10];
	
	int i,j,k,n,a,b,c;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i=0,j=0,k=0;i<n;i++){
		if(vetor[i]>0){
			positivos[k]=vetor[i];
			k++;
		}
		else{
			negativos[j]=vetor[i];
			j++;
		}
	}
	
	printf("vetor inicial: ");
	for (a=0;a<i;a++){
		printf("%d ", vetor[a]);
	}
	printf("\n");
	printf("positivos: ");
	for (b=0;b<k;b++){
		printf("%d ", positivos[b]);
	}
	printf("\n");
	printf("negativos: ");
	for (c=0;c<j;c++){
		printf("%d ", negativos[c]);
	}
	
}