#include <stdio.h>
int main(){
	char frase [] = "hoje esta um belo dia.";
	char invertida []="                     .";
	int i,j,k,l;
	
	for(i=0;i<22;i++){
		printf("%c", frase[i]);
	}
	
	printf("\n");
	
	for(i=0,j=3;i<4;i++,j--){
		invertida[j]=frase[i];
	}
		
	for(k=5,l=8;k<9;k++,l--){
		invertida[l]=frase[k];
	}
	
	for(i=10,j=11;i<12;i++,j--){
		invertida[j]=frase[i];
	}
	
	for(i=13,j=16;i<17;i++,j--){
		invertida[j]=frase[i];
	}
	
	for(i=18,j=20;i<21;i++,j--){
		invertida[j]=frase[i];
	}
	
	for(i=0;i<22;i++){
		printf("%c", invertida[i]);
	}


}