#include <stdio.h>

int tetranacci(int t1, int t2, int t3, int t4,int n,int aux,int cont){
	if(cont>=n && cont!=4)return t4;
	
	
	if(cont==4)t4=1;
	aux = t1 + t2 + t3 + t4;
	t1=t2;
	t2=t3;
	t3=t4;
	t4=aux;

	return tetranacci(t1,t2,t3,t4,n,aux,cont+1);
}

int main(){
	int n;
	printf("insira n:");
	scanf("%d", &n);
	printf("n-esimo termo: %d", tetranacci(0,0,0,0,n,0,1));
}