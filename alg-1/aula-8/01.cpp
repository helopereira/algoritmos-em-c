#include <stdio.h>
   
long int potencia (int x, int n){
	int i, a=1;
	
	for(i=1; i<=n; i++){
		a=a*x;
	}
	
	return a;
}

long int fatorial (int x){
	int i;
	long int b=1;
	
	for(i=1; i<=x; i++){
		b=b*i;
	}
	
	return b;
}

float exponencial (int x, int termos){
	int i;
	float exp=0;
	
	for(i=0;i<=termos;i++)
	{
		exp+=(potencia(x,i)/fatorial(i));
	}
	
	return exp;
}

int main (){
	int x, termos;
	scanf("%d%d", &x, &termos);
	printf("%.0f", exponencial(x,termos));
}
