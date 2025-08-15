#include <stdio.h>

void valor_1 (int x){
	
	if(x>0){
		printf("1\n");
	}
	
	else if (x==0){
		printf("0\n");
	}
	
	else{
		printf("-1\n");
	}
}

int valor_2 (int x){
	if(x>0){
		return 1;
	}
	
	else if (x==0){
		return 0;
	}
	
	else{
		return -1;
	}
}

int main(){
	int x;
	
	scanf("%d",&x);
	valor_1(x);
	printf("%d", valor_2(x));
}	