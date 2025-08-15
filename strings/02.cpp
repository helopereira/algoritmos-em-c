#include <stdio.h>

int strlen(char cadeia []){
	int cont=0;
	
	while(cadeia[cont]!='\0'){
		cont++;
	}
	
	return cont;
}

void strupr(char cadeia []){
	int aux,i;
	
	for(i=0;i<10;i++){
		aux=cadeia[i];
		aux=aux-32;
		cadeia[i]=aux;
	}
}


void strcpy(char cadeia [], char copia []){
	int i;
	
	for(i=0;i<10;i++){
		copia [i] = cadeia [i];
	}
	
}

int main (){
	char cadeia[]= "algoritmos";
	char copia[10];
	int x;
}