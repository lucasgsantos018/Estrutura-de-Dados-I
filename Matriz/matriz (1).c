#include "matriz.h"
#include<stdio.h>
#include<stdlib.h>

void lerOrdem(int *ordem){

    scanf("%d", ordem);

}

//manter como especificado
double **alocaMatriz(double **M, int ordem){

    M = (double**) malloc (ordem * sizeof(double*));
    
    if (M == NULL)
    {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    for(int i = 0; i < ordem ; i++)
    {
        M[i] = (double*) malloc (ordem * sizeof(double)); 
        if (M[i] == NULL)
        {
            printf("Memoria insuficiente.\n");
            exit(1);
        }
    }
    return M;

}

//manter como especificado
double **desalocaMatriz(double **M, int ordem){

    for(int i = 0; i < M ; i++)
    {
        free(M[i]);
    }
    free(M);
    
    return NULL ;

}

//manter como especificado
void lerOperacao(char *operacao){

    scanf(" %c", operacao);

}

void lerMatriz(double **M, int ordem){

    for(int i = 0 ; i < ordem ; i++)
    {
        for(int j = 0 ; j < ordem ; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

}

double somaMatriz(double **M, int ordem){

    double soma; 
    int aux = 0 ;
    
    for(int i = 0 ; i < ordem ; i++)
    {
        for(int j = i + 1 ; j <  (ordem - 1) - aux; j++)
        {
            soma += M[i][j];
        }
        aux++;
    }
    return soma;

}

double media(double resultado, int ordem){

}

void printResultado(double resultado){

    printf("%.1lf\n", resultado);

}
