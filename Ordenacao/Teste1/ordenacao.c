#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Manter como especificado
TipoAluno *alocaAlunos(TipoAluno *alunos, int n)
{
   //preencher
    alunos = (TipoAluno*) malloc (n * sizeof(TipoAluno)); 

    if (alunos == NULL)
    {
        printf ("Memoria insuficiente\n");
        exit(1);
    }
    return alunos;
}

//Manter como especificado
TipoAluno *desalocaAlunos(TipoAluno *alunos)
{
  //preencher
  free(alunos);
  return NULL;
}

void ordena(TipoAluno *alunos, int n)
{
	//preencher
  TipoAluno aux;
  for(int i = 0 ; i < n ; i++)
  {
    for(int j = 1 ; j < n - i ; j++)
    {
      if(strcmp(alunos[j].nome , alunos[j - 1].nome) < 0 )
      {
        aux = alunos[j];
        alunos[j] = alunos[j - 1];
        alunos[j - 1] = aux;
      }
    }
  }
}
