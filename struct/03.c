#include <stdio.h>
#include <string.h>

	struct contato{
		char nome [50];
		char email [50];
		int telefone;
	};
	
	struct contato contatos[20];
	
	void adicionar (struct contato *contatos){
		int i;
		char lixo[1];
		
		gets(lixo);
		printf("ADICIONAR CONTATO\n");
		printf("Nome:");
		gets(contatos->nome);
		printf("Email:");
		gets(contatos->email);
		printf("Telefone:");
		scanf("%d",&contatos->telefone);
		gets(lixo);
	}
	
	void imprimir (struct contato contatos){
		printf("\nNome: %s", contatos.nome);
		printf("\nEmail: %s", contatos.email);
		printf("\nTelefone: %d\n", contatos.telefone);
	}
	
	void buscar (struct contato contatos[20]){
		int i,j,aux1=0,aux2=0,aux3=0;
		char busca [50];
		char lixo[1];
		int len, len2;
		
		gets(lixo);
		printf("BUSCAR CONTATO");
		printf("\nInsira o nome que deseja buscar: ");
		gets(busca);

		for(i=0;i<20;i++){
			if(strcmp(contatos[i].nome,busca)==0){
				aux1=strlen(busca);
				
				for(j=0,aux2=0;j<aux1;j++){
					if(contatos[i].nome[j]!=busca[j]){
						aux2++;
					}
				}
				
				if(aux2==0){
					imprimir(contatos[i]);
					aux3++;
				}
			}
		}
		printf("aux :%d\n\n", aux3);
		if(aux3==0)printf("CONATATO NAO ENCONTRADO!\n\n");	
	}
	
	void apagar (struct contato contatos[20]){
		int i,j,aux1=0,aux2=0,aux3=0;
		char busca [50];
		char lixo[1];
		int len, len2;
		
		gets(lixo);
		printf("APAGAR CONTATO");
		printf("\nInsira o contato que deseja apagar: ");
		gets(busca);

		for(i=0;i<20;i++){
			if(strcmp(contatos[i].nome,busca)==0){
				aux1=strlen(busca);
				
				for(j=0,aux2=0;j<aux1;j++){
					if(contatos[i].nome[j]!=busca[j]){
						aux2++;
					}
				}
				
				if(aux2==0){
					contatos[i].nome[0]='\0';
					contatos[i].email[0]='\0';
					contatos[i].telefone=0;
					aux3++;
					printf("CONATATO APAGADO!\n\n");
				}
			}
		}
		if(aux3==0)printf("CONATATO NAO ENCONTRADO!\n\n");
	}
	
	char menu(){
		char escolha;
		
		printf("\nMENU\n");
		printf("1-ADICIONAR\n");
		printf("2-BUSCAR\n");
		printf("3-EXCLUIR\n");
		printf("S-SAIR\n");
		scanf("%c", &escolha);
			
		return escolha;
	}
	
	
	int main(){
		int salvos=0;
		char escolha;
		printf("AGENDA DE CONTATOS\n");
		
		
		while(escolha!='s'){

			escolha=menu();
			switch(escolha){
				case '1': 
					if(salvos<20){
						adicionar(&contatos[salvos]);
					salvos++;
					}
					else{
						printf("NUMERO MAX DE CONTATOS SALVOS ATINGIDO!\n");
					}
					break;
					
				case '2': buscar(contatos);break;
				case '3': apagar(contatos);break;
			}
		}
	}
	
	