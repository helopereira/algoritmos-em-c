#include <stdio.h>

float media (int n, int v[3],int *m){
	int s=0, cont=0,i;
	
	for(i=0;i<n;i++){
		s=s+v[i];
		cont++;
	}
	
	*m=s/cont;
}

int menorr (int v[3], int n){
	int i, menor=100000;
	for(i=0;i<n;i++){
		if(v[i]<menor){
			menor=v[i];
		}
	}
	
	return menor;
}

int maiorr (int v[3], int n, int *maior){
	int i;
	for(i=0;i<n;i++){
		if(v[i]>*maior){
			*maior=v[i];
		}
	}
}
    
float percentual (int v[3], int n){
	int p=0, cont=0, i;
	for(i=0;i<n;i++){
		if(v[i]%3==0){
			cont++;
		}
	}
	
	p=(cont*100)/n;
	
	return p;
}

int main(){
	int v[3], n, i, m,  maior=0;
	
	do{
	scanf("%d", &n);
	}while(n>3);
	
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
	}
	
	media(n,v,&m);
	maiorr(v,n,&maior);
	
	printf("media: %d\n", m);
	printf("maior: %d\n", maior);
	printf("menor: %d\n", menorr(v,n));
	printf("percentual: %.1f%%\n", percentual(v,n));
}