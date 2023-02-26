#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 4

void cargarMatriz(int mat[][TAM], int t);
void mostrarMatriz(int mat[][TAM], int t);

void multiplicarMatriz(int mat[][TAM],int mat2[][TAM], int resultado[][TAM],int t);

int main()
{
    srand(time(NULL));

    int t = 4;

    int matriz[t][TAM];
    int matriz2[t][TAM];
    int resultado[t][TAM];


    cargarMatriz(matriz,t);
    mostrarMatriz(matriz,t);

    printf("\n");

    cargarMatriz(matriz2,t);
    mostrarMatriz(matriz2,t);

    printf("\n");

    multiplicarMatriz(matriz,matriz2,resultado,t);
    mostrarMatriz(resultado,t);


    return 0;
}

void cargarMatriz(int mat[][TAM], int t){

    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
             mat[i][j] = 1+rand()%9;
        }
    }

};
void mostrarMatriz(int mat[][TAM], int t){

    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            printf("/ %d /",mat[i][j]);
        }
        printf("\n");
    }

};

void multiplicarMatriz(int mat[][TAM],int mat2[][TAM], int resultado[][TAM],int t){

    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
                resultado[i][j]=0;
            for(int k=0; k<t; k++){
                resultado[i][j] = resultado[i][j] + (mat[i][k] * mat2[k][j]);
            }
        }
    }



};
