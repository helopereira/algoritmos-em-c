//compilador: dev c++  -  sistema operacional: windows 11
//Heloisa Pereira dos Santos RA:231021585

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 1000

void dec2all(char n [], int basec){
	int resto;
	int num = atoi(n);
	char aux[MAX];
	int i=0;
	
	do{
		resto=num%basec;
		if(basec==16 && resto>9){
			switch(resto){
				case 10: aux[i]='A';break;
				case 11: aux[i]='B';break;
				case 12: aux[i]='C';break;
				case 13: aux[i]='D';break;
				case 14: aux[i]='E';break;
				case 15: aux[i]='F';break;
			}
		}
		else{
			itoa(resto,&aux[i],10);
		}
		
		num = num / basec;
		i++;
	}while(num>=1);
	
	aux[i]=='\0';
	printf(" resultado: %s\n", strrev(aux));
}

void all2dec(char n[], int base, int basec){
	int i,j,aux,som,aux2;
	char n2[MAX];
	j = strlen(n);
	aux = j - 1;

	for(i=0;i<j;i++,aux--){
		if(base==16 && n[i]=='A')
			som += 10 * pow(base,aux);
		else if(base==16 && n[i]=='B')
			som += 11 * pow(base,aux);
		else if(base==16 && n[i]=='C')
			som += 12 * pow(base,aux);
		else if(base==16 && n[i]=='D')
			som += 13 * pow(base,aux);
		else if(base==16 && n[i]=='E')
			som += 14 * pow(base,aux);
		else if(base==16 && n[i]=='F')
			som += 15 * pow (base,aux);
		else{
			aux2 = n[i]-48;
			som += aux2 * pow (base,aux);
		}
	}
	
	if(basec==1){
		printf("resultado: %d\n", som);
	}	
		
	else{
		itoa(som,n2,10);
		dec2all(n2,basec);
	}
}


int main(){
	int base, basec;
	char n [MAX];
	
	do{
		printf("------------ CONVERSOR DE BASES NUMERICAS ------------\n");
		printf("selecione a base do numero que voce deseja converter ou 0 para sair: \n");
		printf("(1) decimal\n");
		printf("(2) binario\n");
		printf("(8) octal\n");
		printf("(16) hexadecimal\n");
		scanf("%d", &base);
		printf("insira o numero que voce deseja converter\n");
		fflush(stdin);
		gets(n);
		printf("selecione a base para qual voce deseja converter: \n");
		printf("(1) decimal\n");
		printf("(2) binario\n");
		printf("(8) octal\n");
		printf("(16) hexadecimal\n");
		scanf("%d", &basec);
		
		if(base!=1)
			all2dec(n, base, basec);
		
		else
			dec2all(n, basec);
	}while(base!=0);
}