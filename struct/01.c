#include <stdio.h>

	struct aluno{
		char nome [50];
		int matricula;
		float nota_prova;
		float nota_trab;
	};
	
	struct aluno alunos[3];
	
	void leitura (struct aluno *alunos){
		int i;
		char lixo[1];
		
		for(i=0;i<3;i++){
			printf("\nInsira os dados do aluno\n");
			printf("Nome:\n");
			gets(alunos[i].nome);	
			printf("Numero de matricula:\n");
			scanf("%d", &alunos[i].matricula);	
			printf("Nota de prova:\n");
			scanf("%f", &alunos[i].nota_prova);	
			printf("Nota de trabalho:\n");
			scanf("%f", &alunos[i].nota_trab);	
			gets(lixo);
		}
	}
	
	float media (float prova, float trab){
		float m;
		
		m=prova*0.6+trab*0.4;	
		
		return m;
	}
	
	int main(){
		int i;
		float med;
		
		leitura(alunos);
		
		for(i=0;i<3;i++){
			med=media(alunos[i].nota_prova,alunos[i].nota_trab);
			
			printf("Aluno: %s\n", alunos[i].nome);
			printf("Media: %.1f\n\n", med);
		}
	}
	
	