#include "buscabinaria.h"
#include <stdio.h>
#include <stdlib.h>

long int *alocaTiras(long int *Tiras , long int n){

    Tiras = (long int*) malloc (n * sizeof(long int));
    if(Tiras == NULL){
        printf("Memória insuficiente\n");
        exit(1);
    }
    return Tiras ;

}

long int *desalocarTiras(long int *Tiras){
    free(Tiras);
    return NULL;
}


int casosAnormais(long int *Tiras, long int n , long int a){
    double aux;
    for(int i = 0 ; i < n ; i++){
        aux += Tiras[i];
    }

    if(aux == a){
        printf(":D\n");
        return 0;
    }
    else if(aux < a){
        printf("-.-\n");
        return 0;
    }
    else{
        return 1;
    }

}

double buscaAltura(long int *Tiras, long int n, long int a , double base , double topo){

    double meio  ;
    double controle = (double)1/1000000;

    do{
        double area = 0 ;
        meio = (base + topo) / 2;

        for(int i = 0; i < n ; i++){
            if(Tiras[i] > meio){
                area += Tiras[i] - meio;
            }
        }
        if(area > a){
            base = meio + controle;
        }
        else{
            topo = meio - controle;
        }

    }while(base<=topo);

    return meio;

}

void insertionsort(long int *Tiras, long int n){
    long int aux;
    int j;
    for(int i = 1 ; i < n ; i++){
        aux = Tiras[i];
        j = i - 1;
        while(j >= 0 && aux < Tiras[j]){
            Tiras[j+1] = Tiras[j];
            j = j - 1;
        }
        Tiras[j + 1] = aux;
    }
    
}

