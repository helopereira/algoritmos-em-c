#include <stdio.h>
int main(){
	FILE *arq;
	char txt [1000];
	int i,consoante=0,vogal=0;
	
	arq = fopen ("arquivo.txt", "w");
	printf("insira o texto: ");
	gets(txt);
	
	for(i=0;txt[i];i++){
		if(txt[i]=='a' || txt[i]=='e' || txt[i]=='i' || txt[i]=='o' || txt[i]=='u'|| txt[i]=='A' || txt[i]=='E' || txt[i]=='I' || txt[i]=='O' || txt[i]=='U'){
			vogal++;
		}
		else{
			consoante++;
		}
		putc(txt[i],arq);
	}
	
	fclose(arq);
	printf("VOGAIS: %d CONSOANTES: %d", vogal,consoante);
}