#include <stdio.h>
#include "matrizLib.h"

void diagonalSecundaria(int matriz[][100], int n, int m) {
	int i;
    printf("Diagonal secundaria da Matriz:\n");
    int ordem = (n < m ? n : m);
    for ( i = 0; i < ordem; i++) {
        printf("%3d ", matriz[i][m-1-i]);
    }
    printf("\n");
}
int main() {
    int matriz[100][100];
    int n, m,i,j;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &n);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &m);
    geraMatriz(matriz,n,m);
    printf("\nMatriz gerada:\n");
    for ( i = 0; i < n;i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
	 diagonalSecundaria(matriz,n,m);
    
    return 0;
}
