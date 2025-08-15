#include <stdio.h>
#include <string.h>
int main(){
	char frase[100];
	int i,aux,aux2;
	
	scanf("%s", frase);
	aux=strlen(frase);
	
	for(i=0;i<aux;i++){
		aux2=frase[i];
		switch(aux2){
			case 48: printf("0(zero)"); break;
			case 49: printf("1(um)"); break;
			case 50: printf("2(dois)"); break;
			case 51: printf("3(tres)"); break;
			case 52: printf("4(quatro)"); break;
			case 53: printf("5(cinco)"); break;
			case 54: printf("6(seis)"); break;
			case 55: printf("7(sete)"); break;
			case 56: printf("8(oito)"); break;
			case 57: printf("9(nove)"); break;
			default: printf("%c", frase[i]);break;
		}
	}
}