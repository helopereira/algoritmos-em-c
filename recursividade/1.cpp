#include <stdio.h>

int s_cubo (int n){
//	printf("%d\n",n);
    if(n==1) return 1;
    return n^3 + s_cubo(n-1);
}

int main(){
    int n, aux;

    printf("Insira n:");
    scanf("%d",&n);
    aux=s_cubo(n);
    printf("soma: %d",aux);
}