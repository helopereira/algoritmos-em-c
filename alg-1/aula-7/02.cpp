#include <stdio.h>

int soma (int x, int y){
	
	int valor=0,i;
	
	for(i=x+1;i<y;i++){
		valor=valor+i;
	}
	
	return valor;
}

void soma2 (int x, int y){
	
	int valor=0,i;
	
	for(i=x+1;i<y;i++){
		valor=valor+i;
	}
	
	printf("%d", valor);
}

int main(){
	
	int x,y;
	
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d\n", soma(x,y));
	soma2(x,y);
}