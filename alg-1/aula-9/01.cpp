#include <stdio.h>

int main(){
	
	int alunos[100];
	int aprovados[100];
	int reprovados[100];
	int media=0,i,j=0,k=0,a, conta=0,contr=0;
	
	printf("insira a quantidade de alunos:\n");
	do{
		scanf("%d",&a);
	}while(a>100);
	
	printf("insira as notas:\n");
	for(i=0;i<a;i++){
		scanf("%d", &alunos[i]);
	}
			
	for(i=0;i<a;i++){
		media=media+alunos[i];
	}
	media=media/a;
	printf("media da classe: %d\n", media);
	
	for(i=0, j=0, k=0;i<a;i++){
		if(alunos[i]>=7){
			conta++;
			aprovados[j]=alunos[i];
			j++;
		}
		
		else{
			contr++;
			reprovados[k]=alunos[i];
			k++;
		}
	}
	
	
	
	printf("aprovados: %d\n", conta);
	for(i=0;i<conta;i++){
		printf(" %d", aprovados[i]);
	}
	printf("\n");
	
	printf("reprovados: %d\n", contr);
	for(i=0;i<contr;i++){
		printf(" %d", reprovados[i]);
	}
}