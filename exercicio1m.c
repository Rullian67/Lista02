#include <stdio.h>
#include "matrizLib.h"

int encontrarMaiorValor(int matriz[][100], int n, int m) {
    int maior = matriz[0][0],i,j;
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

int main() {
    int matriz[100][100];
    int n, m,i,j;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &n);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &m);
    printf("Informe a matriz:\n");
    leiaMatriz(matriz,n,m);

    printf("\nMatriz informada:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int maiorValor = encontrarMaiorValor(matriz, n, m);
    printf("\nO maior valor da matriz e: %d", maiorValor);

    return 0;
}

