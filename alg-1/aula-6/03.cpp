#include <stdio.h>
int main (){
	float a[10][10];
	int n,i,j,s1=0, s2=0, latino=1;
	
	do{
	scanf("%d", &n);
	}while(n>10);
	
	for(i=0;i<=n;i++){
		s1=s1+i;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%f", &a[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%.0f ", a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]>n){
				latino=0;
			}
			
			s2=s2+a[i][j];
		}
		
		if(s1!=s2){
			latino=0;
		}
		
		s2=0;
	}
	
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(a[i][j]>n){
				latino=0;
			}
			
			s2=s2+a[i][j];
		}
		
		if(s1!=s2){
			latino=0;
		}
		
		s2=0;
	}
	
	if(latino==1){
		printf("eh quadrado latino");
	}
	
	else{
		printf("n eh quadrado latino");
	}
}

