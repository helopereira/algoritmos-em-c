#include <stdio.h>
int menor (int vetor[],int m,int i){
	if(i<0){
		return m;
	} 
	
	if(vetor[i] < m){
	 m=vetor[i];	
	}
	
	return menor(vetor,m,i-1);
}

int main(){
	int m = 10000000000000000;
	int vetor[]= {9,1,15,132,3,10};
	
	printf("menor: %d",menor(vetor,m,5));
}