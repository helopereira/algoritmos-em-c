#include <stdio.h>
#include <string.h>

int main () {
	char str[50]; 
	char *d;
	char *de;
	char *m;
	char *a;
	
	gets(str);
	
	d = strtok (str," ");
	de = strtok(NULL," :.!,-"); 
	m = strtok(NULL," :.!,-"); 
	de = strtok(NULL," :.!,-"); 
	a = strtok(NULL," :.!,-"); 

	
	if(strcmp(m, "janeiro")==0){
		printf("%s/01/%s", d, a);
	}
	if(strcmp(m, "fevereiro")==0){
		printf("%s/02/%s", d, a);
	}
	if(strcmp(m, "marco")==0){
		printf("%s/03/%s", d, a);
	}
	if(strcmp(m, "abril")==0){
		printf("%s/04/%s", d, a);
	}
	if(strcmp(m, "maio")==0){
		printf("%s/05/%s", d, a);
	}
	if(strcmp(m, "junho")==0){
		printf("%s/06/%s", d, a);
	}
	if(strcmp(m, "julho")==0){
		printf("%s/07/%s", d, a);
	}
	if(strcmp(m, "agosto")==0){
		printf("%s/08/%s", d, a);
	}
	if(strcmp(m, "setembro")==0){
		printf("%s/09/%s", d, a);
	}
	if(strcmp(m, "outubro")==0){
		printf("%s/10/%s", d, a);
	}
	if(strcmp(m, "novembro")==0){
		printf("%s/11/%s", d, a);
	}
	if(strcmp(m, "dezembro")==0){
		printf("%s/12/%s", d, a);
	}
	
}