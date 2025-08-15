#include<stdio.h>

int main(){
	typedef struct{
	char nome [50];
	float n1;
	float n2;
	float media;
	}aluno;
	
	aluno alunos;
	int qntalunos;
	FILE *arq;
	char op;
	
	do{
		printf("cadastrar alunos\n");
		fflush(stdin);
		printf("nome: ");
		gets(alunos.nome);
		printf("nota 1:");
		scanf("%f", alunos.n1);
		printf("nota 2:");
		scanf("%f", alunos.n2);
		alunos.media=(alunos.n1+alunos.n2)\2;
		printf("digite s para continuar\n");
		fflush(stdin);
		op=getch();
		
		arq = fopen("alunos.txt", "r");
		
	}while(op!='s');
	
	
}


