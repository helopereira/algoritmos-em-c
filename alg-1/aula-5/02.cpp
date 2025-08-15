#include <stdio.h>
int main (){
	float num[15];
	int i;
	float maior=0;
	
	for(i=0;i<=14;i++){
		scanf("%d", &num[i]);	
	}
	
	for(i=0;i<=14;i++){
		if(num[i]>maior){
			maior=num[i];
		}	
	}
	
	for(i=0;i<=14;i++){
		num[i]=num[i]/maior;
	}
	
	for(i=0;i<=14;i++){
		printf("%.2f ", num[i]);
	}

}