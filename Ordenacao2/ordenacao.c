#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>

//Manter como especificado
int *alocaVetor(int *vetor, int n){

    vetor = (int*) malloc (n * sizeof(int));

    if (vetor == NULL)
    {
        printf ("Memoria insuficiente\n");
        exit(1);
    }
    return vetor;

}

//Manter como especificado
int *desalocaVetor(int *vetor){

    free(vetor);
    return NULL;

}

void ordenacao(int *vetor, int n, int *movimentos){ 
    int mov = 0;
    for(int i = 0; i < n ; i++)
    {
        for(int j = 1 ; j < n - i ; j++)
        {
            if(vetor[j] < vetor[j - 1])
            {
                int aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
                mov++;
            }
        }
    }
    *movimentos = mov ;
}



