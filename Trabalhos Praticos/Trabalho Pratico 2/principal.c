#include "ordenacao.h"
#include <stdio.h>

int main(){

    Classificacao * Paises ;
    int nmrPaises;

    lerNmrPaises(&nmrPaises);

    Paises = alocar(Paises, nmrPaises);
    preencherVetor(Paises,nmrPaises);

    ordenarOuro(Paises, nmrPaises);
    ordenarPrata(Paises, nmrPaises);
    ordenarBronze(Paises , nmrPaises);
    ordemAlfabetica(Paises,nmrPaises);

    printarTabela(Paises,nmrPaises);
    Paises = desalocar(Paises);

    return 0;
}