#include<stdio.h>
#include<cctype>
#include<string.h>
 typedef struct {
 	char palavra[200];
 }texto;
  void qs_struct(texto dicionario[],int esq, int dir)
 {
 	
 	register int i,j;
 	int k;
 	char *x;
 	texto temp;
 	i=esq;j=dir;
 	x=dicionario[(esq+dir)/2].palavra;
 	
 	do{
 		while(strcmp(dicionario[i].palavra,x)<0 && i<dir)i++;
 		while(strcmp(dicionario[j].palavra,x)>0 && j>esq)j--;
 		
 
 	
 		
 		if(i<=j){
 			
 			
 			temp=dicionario[i];
 			dicionario[i]=dicionario[j];
 			dicionario[j]=temp;
 			i++; j--;
 			}
	 }while(i<=j);
	 if(esq<j)qs_struct(dicionario,esq,j);
	 if(i<dir)qs_struct(dicionario,i,dir);
	
	 
 }
 
 void quick_struct(texto dicionario[],int count)
 {
 	qs_struct(dicionario,0,count-1);
 		
 }

int main(){
	texto dicionario[5000];
	char aux1[201];char aux2[201];
	char *tam;
	int d,o=0;
	
	for(int x=0;x<3;x++)
	{
		int i,j;
		i=0;
		j=0;
		
	  fflush(stdin);
       scanf(" %[^\n]s", aux1);
      while(aux1[i]!='\0')
      { 
      	aux2[j]=tolower(aux1[i]);
      	i++;
      	j++;
	  }

	  aux2[j]='\0';
	
	  
	tam=strtok(aux2,",. ");

	while(tam!=NULL)
	{
		
	
		strcpy(dicionario[d].palavra,tam);
		tam=strtok(NULL,",. ");
		d++;
	}

	
	
	
	}
	
		quick_struct(dicionario,d);

		int k,j=0;
		
		
		while(k<d){
		j=k;
		printf("%s\n",dicionario[].palavra);
		printf("%d",k);
		while(strcmp(dicionario[k].palavra,dicionario[j++].palavra))
		{
			J++;
		}
		k++;
		
	}
}