#include <stdio.h>
#include <stdbool.h>

bool mesmaOrdem(int lin1, int col1, int lin2, int col2) {
    return (lin1 == lin2 && col1 == col2);
}
void somarMatrizes(int matriz1[][100], int matriz2[][100], int resultado[][100], int lin, int col) {
	int i,j;
    for ( i = 0; i < lin; i++) {
        for ( j = 0; j < col; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
	int matriz1[100][100],matriz2[100][100],resultado[100][100];
    int lin, col,i,j;

    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &lin);
    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &col);
	
    printf("Digite os elementos da matriz 1:\n");
    for ( i = 0; i < lin; i++) {
        for ( j = 0; j < col; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da matriz 2:\n");
    for ( i = 0; i < lin; i++) {
        for ( j = 0; j < col; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    if (!mesmaOrdem(lin, col, lin, col)) {
        printf("As matrizes nao sao da mesma ordem.\n");
    } else {
        somarMatrizes(matriz1, matriz2, resultado, lin, col);

        printf("A matriz resultante da soma:\n");
        for ( i = 0; i < lin; i++) {
            for ( j = 0; j < col; j++) {
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

