#include <stdio.h>
#include "matrizLib.h"

void multiplicarnumeros(int matriz [100][100],int lin,int col,int escalar){
		int i,j;
	for ( i = 0; i < lin;i++) {
        for ( j = 0; j < col; j++) {
        	matriz[i][j] *= escalar;
			}
		}
	}

int main() {
    int matriz[100][100];
    int n, m,i,j,escalar;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &n);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &m);
    printf("Digite a matriz:");
    leiaMatriz(matriz,n,m);
    printf("\nMatriz:\n");
    for ( i = 0; i < n;i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Digige o escalar:\n");
    scanf("%d",&escalar);
    
    multiplicarnumeros(matriz,n,m,escalar);
    
    for ( i = 0; i < n;i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
