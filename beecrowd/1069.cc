#include<stdio.h>
#include<string.h>

int main()
{
	int n,contdia,tam,x;
	char diamante[1001];

	scanf("%d",&n);
		
	for(int i=0;i<n;i++){

		scanf("%s",&diamante);
		tam=strlen(diamante);
		x=0;
		contdia=0;
		for(int j=0;j<tam;j++){	
			if(diamante[j]=='<')
			{
			x++;
			}
			if(x>0 && diamante[j]=='>')	
			{
				x--;
				contdia++;
			}
		}
		printf("%d\n",contdia);
   }
	
	return 0;
	
}

