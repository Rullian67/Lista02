#include <stdio.h>
#include "matrizLib.h"
int main (){
	int mar [100][100], i, area =0 , qtdRedes;
	int xi, xf,yi,yf;//coordenadas da rede

	printf("Quantidades de redes lancadas:\n");
	scanf("%d",&qtdRedes);
	
	for (i=0;i<qtdRedes;i++){
	printf("Coordenadas da rede:");
	scanf("%d%d%d%d",&xi,&xf,&yi,&yf);
	area += (xf - xi) * (yf - yi);
}
	printf("%d",area);
	
	return 0;
}

