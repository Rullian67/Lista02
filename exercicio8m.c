#include <stdio.h>
#include <string.h>
#include "matrizLib.h"
	void somarmatrizes(float matriz1[100][100],float matriz2[100][100],float matriz3[100][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
	  		matriz3[i][j]= matriz1[i][j] + matriz2[i][j];		
		}
	}
}

	void subtrairmatrizes(int matriz1[100][100],int matriz2[100][100],int matriz4[100][100],int linhas,int cols){
	int i,j;
		for(i=0;i<linhas;i++){
			for(j=0;j<cols;j++){
	  			matriz4[i][j]= matriz1[i][j] - matriz2[i][j];		
		}
	}
}
	void addconstante(float matriz1[100][100],float matriz2[100][100],int matriz5[100][100], int matriz6[100][100],int linhas,int cols,int constante){
	int i,j;
		for ( i = 0; i < linhas; i++) {
        	for ( j = 0; j < cols; j++) {
            	 matriz5[i][j] = matriz1[i][j] + constante;
            		matriz6[i][j] = matriz2[i][j] +constante;
        }
    }
}
int main(){
	
	float matriz1[100][100],matriz2[100][100],matriz3[100][100],matriz4[100][100],matriz5[100][100],matriz6[100][100],constante;
	int i,j,linhas,cols;
	
	printf("Tamanho matriz 1:\n");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(matriz1,linhas,cols);
	printf("Tamanho matriz 2:\n");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(matriz2,linhas,cols);
	printf("Matriz1:\n");
	printMatriz(matriz1,linhas,cols);
	printf("Matriz2:\n");
	printMatriz(matriz2,linhas,cols);
	
	somarmatrizes(matriz1, matriz2,matriz3,linhas,cols);
	printf("Soma das matrizes\n");
	printMatriz(matriz3,linhas,cols);
		
	subtrairmatrizes(matriz1, matriz2,matriz4,linhas,cols);
	printf("Subtracao das matrizes\n");
	printMatriz(matriz4,linhas,cols);
	
	printf("Digite a constante a ser adicionada:\n");
	scanf("%.2f",&constante);
	addconstante(matriz1,matriz2,matriz5,matriz6,linhas,cols,constante);
	printMatriz(matriz5,linhas,cols);
	printMatriz(matriz6,linhas,cols);
	
	printf("Matrizes imprimidas:\n");
	printMatriz(matriz1,linhas,cols);
	printMatriz(matriz2,linhas,cols);
	printMatriz(matriz3,linhas,cols);
	printMatriz(matriz4,linhas,cols);
	printMatriz(matriz5,linhas,cols);
	printMatriz(matriz6,linhas,cols);
	
	return 0;
}
