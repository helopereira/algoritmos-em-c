#include <stdio.h>

void conv(int x,float y){
	
	
	float valor=0;
	valor=y;
	
	switch(x){
		case 1:
		valor=valor*1.093613;
		printf("%f jardas\n", valor);
		break;
	
	
		case 2:
		valor=valor*4046.856422;
		printf("%f metros quadrados\n", valor);
		break;
	
	
		case 3:
		valor=valor*2,471054;
		printf("%f acres\n", valor);
		break;
	
	}
}

float conv2(int x,float y){
	
	float valor=0;
	valor=y;
	
	switch(x){

		case 1:
		valor=valor*1.093613;
		return valor;
		break;
	
	
		case 2:
		valor=valor*4046.856422;
		return valor;
		break;
	
	
		case 3:
		valor=valor*2,471054;
		return valor;
		break;
	}
}

int main(){
	int x,y;
	
	scanf("%d %f", &x,&y);
	
	conv(x,y);
	printf("%f", conv2(x,y));
}

