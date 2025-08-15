#include <stdio.h>

	typedef struct{
		int cod;
		char nome[50];
		int idade;
		char end[100];
		int telefone;
		int existe;
	}clientes;
	
	typedef struct{
		int cod;
		int data;
		int hora;
	}consultas;

	void cadastrar(){
		printf("CADASTRAR CLIENTE\n");
		clientes cliente;
		FILE *arq;
		
		arq = fopen("clientes.dat", "wb");
	
		printf("Codigo do cliente: ");
		scanf("%d", &cliente.cod);
		fflush(stdin);
		printf("Nome: ");
		gets(cliente.nome);
		printf("Idade: ");
		scanf("%d", &cliente.idade);
		fflush(stdin);
		printf("Endereco: ");
		gets(cliente.end);
		printf("Telefone: ");
		scanf("%d", &cliente.telefone);
		cliente.existe=1;
		
		fwrite(&cliente,sizeof(cliente),1,arq);
		fclose(arq);
	}
	
	void alterar(){
		printf("ALTERAR CLIENTE\n");
		int cod,cont=0;
		clientes cliente;
		FILE *arq;
		
		arq = fopen("clientes.dat", "r+b");
		
		printf("Insira o codigo do cliente: ");
		scanf("%d", &cod);
		
		while(fread(&cliente,sizeof(cliente),1,arq)){
			if(cliente.existe && cliente.cod==cod){
				printf("Codigo do cliente: ");
				scanf("%d", &cliente.cod);
				fflush(stdin);
				printf("Nome: ");
				gets(cliente.nome);
				printf("Idade: ");
				scanf("%d", &cliente.idade);
				fflush(stdin);
				printf("Endereco: ");
				gets(cliente.end);
				printf("Telefone: ");
				scanf("%d", &cliente.telefone);
				cliente.existe=1;
				
				fseek(arq,-sizeof(cliente),SEEK_CUR);
				fwrite(&cliente,sizeof(cliente),1,arq);
				
				cont++;
			}
		}
		fclose(arq);
		if(cont==0)printf("Cliente nao encontrado\n\n");
	}
	
	void marcar(){
		printf("marcar\n");
	}
	
	void desmarcar(){
		printf("desmarcar\n");
	}
	
	void mapa(){
		printf("mapa\n");
	}
	
	void consulta(){
		printf("consulta\n");
	}
	
	void meses(){
		printf("meses\n");
	}

int menu(){
	char aux;
	
	printf("Selecione uma opcao abaixo:\n");
	printf("(1) Cadastrar cliente\n");
	printf("(2) Alterar dados de cliente\n");
	printf("(3) Marcar consulta\n");
	printf("(4) Desmarcar a consulta\n");
	printf("(5) Escrever mapa de horarios para um determinado dia\n");
	printf("(6) Escrever o nome e as datas em que um paciente foi consultado\n");
	printf("(7) Escrever o nome e o telefone de todos os pacientes cuja ultima consulta ocorreu ha mais de 6 meses e que tem idade superior a 50 anos\n");
	printf("(8) Sair\n");
	
	fflush(stdin);
	aux=getchar();
	
	switch(aux){
		case '1': cadastrar(); break;
		case '2': alterar(); break;
		case '3': marcar(); break;
		case '4': desmarcar(); break;
		case '5': mapa(); break;;
		case '6': consulta();break;
		case '7': meses(); break;
		case '8':return -1;
	}

}

int main(){
	int aux;
	
	do{
		aux = menu();;
	}while (aux!=-1);
}