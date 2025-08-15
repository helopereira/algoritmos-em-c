#include <stdio.h>
#include<string.h>
int main(){
	char str [50];
	int i,j, aux;

	gets(str);
	aux=strlen(str);
	
	char strn[strlen(str)+1];
	
	
	if(str[0]==' '){
		for (i=1,j=0; i<aux ;i++){	
			str[j]=str[i];
			j++;
		}
		
		str[j]='\0';
	}
	
	printf("%s\n",str);
	
	
}