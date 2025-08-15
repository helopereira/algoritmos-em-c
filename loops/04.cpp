#include <stdio.h>
#include <string.h>
#include <conio.h>

void minha_strncat(char string[], char string2[], int n){
	int i,j;
	
	printf("leitura da string:\n");
	scanf("%s", string);

	printf("leitura da string2:\n");
	scanf("%s", string2);

	printf("N:\n");
	scanf("%d", &n);
	
	i=strlen(string);

	for(j=0;j<n;j++){
		string[i]=string2[j];
		i++;
	}
	string[i]='\0';
	printf("%s\n", string);
}

void minha_strncpy(char string[], char string2[], int n){
	int i;
	
	printf("leitura da string:\n");
	scanf("%s", string);

	printf("N:\n");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		string2[i]=string[i];
	}
	string[i]='\0';
	printf("%s\n", string2);
}

int minha_strncmp(char string[], char string2[], int n){
	int i,aux;
	
	printf("leitura da string:\n");
	scanf("%s", string);

	printf("leitura da string2:\n");
	scanf("%s", string2);

	printf("N:\n");
	scanf("%d", &n);
	
	if((strlen(string)<n)||(strlen(string2)<n)){
		printf("n sao iguais\n");
		return 0;
	}
	for(i=0;i<n;i++){
		if(string[i]!=string2[i]){
			printf("n sao iguais\n");
			return 0;
		}
	}
	printf("sao iguais\n");
}

int main(){
	char string[30];
	char string2[30];
	int n,i,op,aux,aux2;
	
	printf("(1) strncat\n");
	printf("(2) strncpy\n");
	printf("(3) strncmp\n");
	op=getch();

	switch(op){
		case 49: 
		minha_strncat(string,string2,n);
		break;
		
		case 50: 
		minha_strncpy(string,string2,n);
		break;
		
		case 51: 
		minha_strncmp(string,string2,n);
		break;
	}
}