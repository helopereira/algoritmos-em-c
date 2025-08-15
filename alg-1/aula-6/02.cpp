#include <stdio.h>
int main (){
	int N[3][3];
	int i,j,l1=0,l2=0,l3=0,cp=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &N[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", N[i][j]);
		}
		printf("\n");
	}
	
	for(i=0,j=0;j<3;j++){
		l1=l1+N[i][j];
	}
	
	for(i=1,j=0;j<3;j++){
		l2=l2+N[i][j];
	}

	for(i=2,j=0;j<3;j++){
		l3=l3+N[i][j];
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				cp=cp+N[i][j];
			}
		}
	}
	
	if(l1==l2 && l2==l3 && l3==cp){
		printf("eh quadradro magico");
	}
	
	else{
		printf("n eh quadradro magico");
	}
}