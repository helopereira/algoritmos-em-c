#include <stdio.h>
int main (){
	int altura[45];
	int n,s=0,i;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &altura[i]);
	}

	for(i=0;i<n;i++){
		s+=altura[i];
	}
	
	printf("a media eh %d", s/n);
}