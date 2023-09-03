#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>

//Manter como especificado
int *alocaVetor(int *vetor, int n){

    vetor = (int*) malloc (n * sizeof(int));
    
    return vetor;

}

//Manter como especificado
int *desalocaVetor(int *vetor){

    free(vetor);
    return NULL;

}

void ordenacao(int *vetor, int n, int *movimentos){ 
    int mov = 0 , troca ;
    for(int i = 0; i < n ; i++)
    {
        troca = 0;
        for(int j = 1 ; j < n - i ; j++)
        {
            if(vetor[j] < vetor[j - 1])
            {
                int aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
                mov++;
                troca++;
            }
        }
        if(troca == 0)
            break;
    }
    *movimentos = mov ;
}