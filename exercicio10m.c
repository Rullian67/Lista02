#include <stdio.h>
#include "matrizLib.h"

int main() {
    int mapa[300][1000], i, j, raios, x, y;

    for (i = 0; i < 300; i++)
        for (j = 0; j < 1000; j++)
            mapa[i][j] = 0;

    //printMatriz(mapa, 10, 10);

    printf("Quantidade de raios:");
    scanf("%d", &raios);
    for (i = 1; i <= raios; i++) {
        printf("Coordenadas do raio %d:", i);
        scanf("%d%d", &x, &y);
        mapa[x][y]++;
    }
    
	int raioCaiu = 0;
	
    for (x = 0; x < 300; x++) {
        for (y = 0; y < 1000; y ++) {
            if (mapa[x][y] >= 2) {
                raioCaiu = 1;
                break;
            }
        }
        if(raioCaiu){
			break;
		}
	}
       printf("Resultado: %d\n",raioCaiu);

    return 0;
}

