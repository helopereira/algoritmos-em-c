#include <stdio.h>

void perfeito(int x){
	
	int num, i, som=0;
	
	for(i=1;i<x;i++){
		if(x%i==0){
			som=som+i;
		}
	}
	
	if(som==x){
		printf("eh perfeito (1)\n");
	}
	
	else{
		printf("n eh perfeito (0)\n");
	}	
}

int perfeito2(int x){
	
	int num, i, som=0;
	
	for(i=1;i<x;i++){
		if(x%i==0){
			som=som+i;
		}
	}
	
	if(som==x){
		return 1;
	}
	
	else{
		return 0;
	}	
}

int main(){
	int x;
	
	scanf("%d",&x);
	perfeito(x);
	printf("%d", perfeito2(x));
}	
