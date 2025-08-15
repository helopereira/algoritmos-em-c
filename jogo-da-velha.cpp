#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


void ajuda(){
	printf("AJUDA\n");
	printf("COMO JOGAR: PARTICIPAM DUAS PESSOAS, QUE JOGAM ALTERNADAMENTE,\n");
	printf("PREENCHENDO CADA UM DOS ESPAÇOS VAZIOS. CADA PARTICIPANTE PODERÁ\n");
	printf("USAR UM SIMBOLO (X OU O). VENCE O JOGADOR QUE CONSEGUIR FORMAR\n");
	printf("PRIMEIRO UMA LINHA COM TRES SIMBOLOS IGUAIS, SEJA ELA NA HORIZONTAL,\n");
	printf("VERTICAL OU DIAGONAL.\n");
}

void exibir (char matriz[][3]){
	//for printf da matriz formatada
	printf("        %c | %c | %c\n", matriz[0][0], matriz[0][1], matriz[0][2]);
	printf("        ----------\n");
	printf("        %c | %c | %c\n", matriz[1][0], matriz[1][1], matriz[1][2]);
	printf("        ----------\n");
	printf("        %c | %c | %c\n", matriz[2][0], matriz[2][1], matriz[2][2]);

}

int verificaG (char matriz[][3], int *ganhador){

	int i,j,k,cont,cont2,cont3,cont4,cont5,cont6,cont7,cont8;
	
	cont=0;
	cont2=0;
	cont3=0;
	cont4=0;
	cont5=0;
	cont6=0;
	cont7=0;
	cont8=0;
	
	k=0;
	j=0;
	
	for(j=0;j<3;j++)
	{
	
		for(i=0;i<3;i++)
		{
			
    		 if( matriz[i][j]=='X')
    		 {
     			cont++;
			 }
				 if( matriz[i][j]=='O')
    		 {
     			cont2++;
			 }
		}
	}
	
	for(i=0;i<3;i++)
	{

		for(j=0;j<3;j++)
		{
		
			
    		 if( matriz[i][j]=='X')
    		 {
     			cont3++;
			 }
				 if(matriz[i][j]=='O' )
    		 {
     			cont4++;
			 }
		}
	}
	for(i=0;i<3;i++)
	{
		 if(matriz[i][i]=='X')
    		 {
     			cont5++;
     			printf("cont =%d\n",cont5);
			 }
				 if( matriz[i][i]=='O')
    		 {
     			cont6++;
     			
			 }
	}
	j=3;
	for(i=0;i<3;i++)
	{
		j--;
		 if(matriz[i][j]=='X')
    		 {
     			cont7++;
			 }
				 if( matriz[i][j]=='O')
    		 {
     			cont8++;
			 }
	}
	if (cont5==3)
	//add outros cont
	{
		*ganhador=1;
	
		return 1;	
	
	}
	else if(cont2==3 )
	{
		*ganhador=2;
		return 1;
		
	}
			
}


int verificaP (char matriz[][3], char *posicao){
	int aux=0;
	int i,j;
	char aux2;
	
	printf("INSIRA A POSICAO:\n");
	do{
			fflush(stdin);
			scanf("%c",&*posicao);
		
		    for(i=0;i<3;i++)
		    {
		    	for(j=0;j<3;j++)
			   	{
			   		
			    	if(*posicao==matriz[i][j])	
			    	{
			    		aux++;
					}
				}
			}
			
		if(aux==0)
		{
			printf("INSIRA NOVAMENTE\n");
		}	
	}while(aux==0);
	
	return aux;
	
}


void jogador1 (char matriz[][3], char posicao){
	//troca a posição [i,j] por X na matriz
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matriz[i][j]==posicao){
				matriz[i][j]='X';
				exibir(matriz);
			}
		}
	}
	
	
}

void jogador2 (char matriz[][3], char posicao){
	//troca a posição [i,j] por O na matriz
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matriz[i][j]==posicao){
				matriz[i][j]='O';	
				exibir(matriz);
			}
		}
	}
	
	
}

void vencedor (char nome1[], char nome2 [], char matriz[][3], int ganhador){
	int esp,j;
	char *g;

	if(ganhador==1)
	{
		g=nome1;
	
	}
	if(ganhador==2)
	{
		g=nome2;	
	}
	
	
	esp=strlen(g);
	esp=(25-esp)/2;
	
	printf("* * * *  GANHADOR!  * * * *\n");
	printf("*");
	printf("                         ");
	printf("*\n");
	
	printf("*");
	for(j=1;j<=esp;j++){
		printf(" ");
	}
	printf("%s", g);
	for(j=1;j<=esp;j++){
		printf(" ");
	}
	if(strlen(g)%2==0){
		printf(" ");
	}
	printf("*\n");
	
	printf("*");
	printf("                         ");
	printf("*\n");
	printf("* * * * * * * * * * * * * *");
	printf("*\n");
}

void jogo (char nome1[], char nome2 [], char matriz[][3], char *posicao,int ganhador){
	int i=1,j, cont,op,opg;
	exibir(matriz);
	
	printf("INSIRA O NOME DO JOGADOR 1 (X):\n");
	scanf("%s", nome1);
	printf("INSIRA O NOME DO JOGADOR 2 (O):\n");
	scanf("%s", nome2);
	
	do{
	
		do{
			op = verificaP(matriz, posicao);
		}while(op==0);
		
		if(i%2==0){
			jogador2(matriz,*posicao);
		}
		
		else if(i%2!=0){
			jogador1(matriz,*posicao);
		}
		
		opg=verificaG(matriz, &ganhador);
		
		if(opg==1){
			vencedor(nome1,nome2,matriz,ganhador);
			i=10;
		}
		
		i++;
		
	}while(i<=9);
	
	if(i==10){
		printf("DEU VELHA :(\n");
	}
	 
}

int menu(char matriz[][3], char nome1[], char nome2 [],  char *posicao,int ganhador){
	int op;
	matriz[0][0]='1';
	matriz[0][1]='2';
	matriz[0][2]='3';
	matriz[1][0]='4';
	matriz[1][1]='5';
	matriz[1][2]='6';
	matriz[2][0]='7';
	matriz[2][1]='8';
	matriz[2][2]='9';
	
	//printf de menu
	printf("XOXOXOXOX JOGO DA VELHA XOXOXOXOX\n");
	printf("\n");
	printf("F11 - AJUDA\n");
	printf("ESC - SAIR\n");
	printf("ENTER - JOGAR\n");
	printf("\n");
	printf("INSIRA A OPCAO DESEJADA\n");
	//gectch
	op = getch();
	
	switch(op){
		case 27: return 0;break;
		case 13: jogo (nome1, nome2,matriz,posicao,ganhador);break;
		case 224: ajuda (); break;
	}
	//seleçao (switch)
}

int main (){
	char matriz [3][3];
	char nome1 [30];
	char nome2 [30];
	char posicao;
	int ganhador;
	int op;
	
	
	do{
		op = menu(matriz, nome1,nome2,&posicao,ganhador);
	}while(op!=0);
	
}


