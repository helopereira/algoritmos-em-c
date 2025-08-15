#include <stdio.h>

int verifica(int n, int cont, int num){
	if(num==0)return cont;
	
	if(n==num%10){
		cont++;
	}
	
	num=num/10; 
	
	return verifica(n,cont,num);
}

int main(){
	int k, num;
	
	printf("insira o numero:");
	scanf("%d", &num);
	printf("insira k:");
	scanf("%d", &k);
	printf(" %d vezes.", verifica(k,0,num));
}