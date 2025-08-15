#include <stdio.h>

int main(){
	FILE *arq1, *arq2, *arq3;
	char txt [100];
	int i,consoante=0,vogal=0;
	
	arq1 = fopen ("1.txt", "w");
	printf("insira o texto do primeiro arq: ");
	gets(txt);

		fputs(txt,arq1);
		putc('\n',arq1);

	fclose(arq1);
	
	arq2 = fopen ("2.txt", "w");
	printf("insira o texto do segundo arq: ");
	gets(txt);

		fputs(txt,arq2);
		putc('\n',arq2);

	fclose(arq2);
	
	arq1 = fopen ("1.txt", "r");
	arq2 = fopen ("2.txt", "r");
	arq3 = fopen ("3.txt", "a+");
	
	fgets(txt,100,arq1);

	fputs(txt,arq3);
	fgets(txt,100,arq2);

	fputs(txt,arq3);

	
	rewind(arq3);
	while(fgets(txt,100,arq3)!=NULL)
	printf("%s", txt);
	
	fclose(arq1);
	fclose(arq2);
	fclose(arq3);
}