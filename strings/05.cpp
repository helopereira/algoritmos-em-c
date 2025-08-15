#include <stdio.h>
#include<string.h>
int main(){
	char str [50];
	int i,j, aux;

	gets(str);
	aux=strlen(str);
	
	for (i=0,j=0; i<aux ;i++){
		if(str[i]==' ')continue;
			
		str[j]=str[i];
		j++;
	}
	
	str[j]='\0';
	printf("%s",str);
	
}
