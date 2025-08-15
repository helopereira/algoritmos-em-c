#include <stdio.h>

int main(){
	int N,M,dias=0;
	int media[30];
	
	scanf("%d %d", &N,&M);
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &media[0], &media[1], &media[2], &media[3], &media[4], &media[5], &media[6], &media[7], &media[8], &media[9], &media[10], &media[11], &media[12], &media[13], &media[14], &media[15], &media[16], &media[17], &media[18], &media[19], &media[20], &media[21], &media[22], &media[23], &media[24], &media[25], &media[26], &media[27], &media[28], &media[29]);
	
	while(N<M){
		for(int i=0; i<30;i++){
			N+=media[i];
			dias++;
			if(N>M)break;
		}
	}
	
	printf("%d\n", dias);
}