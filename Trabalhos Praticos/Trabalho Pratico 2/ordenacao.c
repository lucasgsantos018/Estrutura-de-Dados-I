#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Classificacao *alocar(Classificacao *Paises , int nmrPaises )
{

    Paises = (Classificacao *) malloc (nmrPaises * sizeof(Classificacao));
    if(Paises == NULL)
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }
    return Paises;
}


Classificacao *desalocar(Classificacao *Paises)
{

    free(Paises);
    return NULL;

}

void lerNmrPaises(int *nmrPaises)
{
    scanf("%d", nmrPaises);
}

void preencherVetor(Classificacao *Paises , int nmrPaises)
{
    for(int i = 0 ; i < nmrPaises ; i++)
    {
        scanf("%s", Paises[i].nomePais);
        scanf("%d", &Paises[i].medalhaOuro);
        scanf("%d", &Paises[i].medalhaPrata);
        scanf("%d", &Paises[i].medalhaBronze);
    }
}


void ordenarOuro(Classificacao *Paises , int nmrPaises)
{
    Classificacao *aux = (Classificacao *) malloc(1 * sizeof(Classificacao));
    for(int i = 1 ; i < nmrPaises ; i++)
    {
        aux[0] = Paises[i];
        int j = i - 1;
        while (j >= 0 && aux->medalhaOuro > Paises[j].medalhaOuro)
        {
            Paises[j + 1] = Paises[j];
            j -= 1;
        }
        Paises[j + 1] = aux[0];
        
    }

    free(aux);
}

void ordenarPrata(Classificacao *Paises , int nmrPaises)
{
    Classificacao *aux = (Classificacao *) malloc(1 * sizeof(Classificacao));
    for(int i = 1 ; i < nmrPaises ; i++)
    {
        aux[0] = Paises[i];
        int j = i - 1;
        while (j >= 0 && aux->medalhaPrata > Paises[j].medalhaPrata && Paises[j].medalhaOuro == aux->medalhaOuro)
        {
            Paises[j + 1] = Paises[j];
            j -= 1;
        }
        Paises[j + 1] = aux[0];
        
    }

    free(aux);
}

void ordenarBronze(Classificacao *Paises , int nmrPaises)
{
    Classificacao *aux = (Classificacao *) malloc(1 * sizeof(Classificacao));
    for(int i = 1 ; i < nmrPaises ; i++)
    {
        aux[0] = Paises[i];
        int j = i - 1;
        while (j >= 0 && aux->medalhaBronze > Paises[j].medalhaBronze && Paises[j].medalhaOuro == aux->medalhaOuro && Paises[j].medalhaPrata == aux->medalhaPrata)
        {
            Paises[j + 1] = Paises[j];
            j -= 1;
        }
        Paises[j + 1] = aux[0];
        
    }

    free(aux);
}

void ordemAlfabetica(Classificacao *Paises , int nmrPaises)
{
    Classificacao *aux = (Classificacao *) malloc(1 * sizeof(Classificacao));
    for(int i = 1 ; i < nmrPaises ; i++)
    {
        aux[0] = Paises[i];
        int j = i - 1;
        while (j >= 0 && (strcmp(aux->nomePais , Paises[j].nomePais) < 0) && aux->medalhaBronze == Paises[j].medalhaBronze && Paises[j].medalhaOuro == aux->medalhaOuro && Paises[j].medalhaPrata == aux->medalhaPrata)
        {
            Paises[j + 1] = Paises[j];
            j -= 1;
        }
        Paises[j + 1] = aux[0];
        
    }

    free(aux);
}

void printarTabela(Classificacao *Paises , int nmrPaises)
{
    for(int i = 0 ; i < nmrPaises ; i++)
    {
        printf("%s", Paises[i].nomePais);
        printf(" %d", Paises[i].medalhaOuro);
        printf(" %d", Paises[i].medalhaPrata);
        printf(" %d\n", Paises[i].medalhaBronze);
    }
}