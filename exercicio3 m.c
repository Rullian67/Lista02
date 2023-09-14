#include <stdio.h>
#include "matrizLib.h"

	int contarnumeros(int matriz [100][100],int n,int m,int x){
		int cont = 0;
		int i,j;
	for ( i = 0; i < n;i++) {
        for ( j = 0; j < m; j++) {
        	if (matriz[i][j] == x){
        		cont++;
			}
		}
	}
	return cont;
}
int main() {
    int matriz[100][100];
    int n, m,i,j,x,cont;
	printf("Digite um numero X:");
	scanf ("%d",&x);
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
    int quantidadeiguais = contarnumeros(matriz,n,m,x);
    
		printf("Quantidade de vezes que o valor %d aparece na matriz e: %d\n",x,quantidadeiguais);
    return 0;
}

