#include <stdio.h>

	struct ponto{
		float x;
		float y;
	};
	
	struct retangulo{
		struct ponto p1;
		struct ponto p2;
	}retangulo1;
	
	ponto distancia (struct retangulo retangulo){
		struct ponto dist;
		
		dist.x=retangulo.p1.x-retangulo.p2.x;
		dist.y=retangulo.p1.y-retangulo.p2.y;
		
		return dist;
	}
	
	float area (struct ponto dist){
		float a;
		
		a=dist.x*dist.y;
	}
	
	void ler(struct retangulo *retangulo){
		
		printf("\nINSIRA O PONTO SUPERIOR ESQUERDO: ");
		scanf("%f %f", &retangulo->p1.x, &retangulo->p1.y);
		
		printf("\nINSIRA O PONTO INFERIOR DIREITO: ");
		scanf("%f %f", &retangulo->p2.x, &retangulo->p2.y);
	}
	
	int main(){
		float a;
		struct ponto d;
		
		printf("CALCULAR AREA DE UM RETANGULO\n");
		ler(&retangulo1);
		d=distancia(retangulo1);
		a=area(d);
		printf("\nA area e igual a %.1f", a);
	}