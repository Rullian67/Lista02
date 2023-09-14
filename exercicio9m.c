#include <stdio.h>

int main() {
    int M[2][3], N[3][2], Mult[2][2];
	int i, j, k;
	
    printf("Digite a matriz M:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }
    printf("Digite a matriz N:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 2; j++) {
            scanf("%d", &N[i][j]);
        }
    }
    if (3 != 3) {
        printf("A multiplicação nao e possivel.\n");
    } else {
        for ( i = 0; i < 2; i++) {
            for ( j = 0; j < 2; j++) {
                Mult[i][j] = 0;
            }
        }
        for ( i = 0; i < 2; i++) {
            for ( j = 0; j < 2; j++) {
                for ( k = 0; k < 3; k++) {
                    Mult[i][j] += M[i][k] * N[k][j];
                }
            }
        }
        printf("Resultado:\n");
        for ( i = 0; i < 2; i++) {
            for ( j = 0; j < 2; j++) {
                printf("%d ", Mult[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

