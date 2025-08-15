#include <stdio.h>

int pares (int n){
	int aux;
	
	if(n==1){
		aux=0;
		printf("%d",aux);
		return aux;
	}
	
	aux = pares(n-1)+2;
	printf(" %d",aux);
	return aux;
	
}
int main(){
	int n;
	printf("insira n:");
	scanf("%d", &n);
	pares(n);
	
}