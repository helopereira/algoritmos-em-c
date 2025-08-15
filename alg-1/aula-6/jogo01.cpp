#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void menu( ){
	int op;
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
	
//	switch(op){
//		case 27: return 0;
//		case 13: jogo
//		case 224: ajuda (); 
//	}
	//seleçao (switch)
}

void exibir (char matriz[][3]){
	//for printf da matriz formatada
	printf("        %c | %c | %c\n", matriz[0][0], matriz[0][1], matriz[0][2]);
	printf("        ----------\n");
	printf("        %c | %c | %c\n", matriz[1][0], matriz[1][1], matriz[1][2]);
	printf("        ----------\n");
	printf("        %c | %c | %c\n", matriz[2][0], matriz[2][1], matriz[2][2]);

}

int verificaG (char matriz[][3], int ganhador){
	//for para todas as colunas,linhas e diagonais verificando se os 3 são iguais, se for igual break e chamar a funcao vencedor
	//se ganhar muda a variavel int ganhador para 1(x) ou 2(o)
}

int verificaP (char matriz[][3], char *posicao, int *l, int *c){
	//scanf char posicao
	//for que procura a variavel posicao dentro da matriz e se nao existir return 0, se existir chama a função inserir
}

void jogador1 (char matriz[][3], int l, int c, char posicao){
	//troca a posição [i,j] por x na matriz
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matriz[i][j]==posicao){
				printf("jogou\n");
				matriz[i][j]='X';
				l=i;
				c=j;
				
			}
		}
	}
	
	
}

void jogador2 (char matriz[][3], int l, int c, char posicao){
	//troca a posição [i,j] por o na matriz
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matriz[i][j]==posicao){
				matriz[i][j]='O';
				l=i;
				c=j;
				
			}
		}
	}
	
	
}

void vencedor (char nome1[], char nome2 [], int ganhador){
	//se ganhador = 1, printf nome 1
	//se ganhador = 2, printf nome 2
	int esp,j;
	char *g;
	
	if(ganhador==1)g=nome1;
	if(ganhador==2)g=nome2;
	
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
	printf("* * * * * * * * * * * * * ⦁");
}

void jogo (){
	//chama exibir
	//for com i\j <3 para as jogadas e contador 
		//colocar tudo em um do while de acordo com verifica ganhador
			//chama verificaposicao, se return 0 repete (do while), se return 1 entra no chama jogador
				//chama jogador 1 ou 2 de acordo com o contador
				//chama verificaganhador, se return0 continue, se return 1 entra num if com a funçao vencedor
					//chama vencedor
					//else contador++
					
	//if contador == 9, printf deu velha :(
}

int main (){
	//declarar variaveis
	char matriz [3][3];
	char nome1 [30];
	char nome2 [30];
	char posicao;
	int p, l, c;
	int ganhador=2;
	
	// atribuir valores na matriz
	matriz[0][0]='1';
	matriz[0][1]='2';
	matriz[0][2]='3';
	matriz[1][0]='4';
	matriz[1][1]='5';
	matriz[1][2]='6';
	matriz[2][0]='7';
	matriz[2][1]='8';
	matriz[2][2]='9';
	
	menu();
	//scanf nomes
//	printf("INSIRA O NOME DO JOGADOR 1 (X):\n");
//	scanf("%s", &nome1);
//	printf("INSIRA O NOME DO JOGADOR 2 (O):\n");
//	scanf("%s", &nome2);
	
//	exibir(matriz);
	
	

//		do{
//		exibir(matriz);
//		printf("INSIRA a posicao (O):\n");
//		scanf("%c", &posicao);
//		printf("posi:%c\n", posicao);
//		jogador1(matriz, l, c, posicao);
//		p++;
//		}while(p<=9);
		
		
	//chama menu
	//menu();
}


