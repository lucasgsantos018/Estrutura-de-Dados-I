#include "duende.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct duende {

  char nome[20];
  int idade;
  int escalado;

};

struct time {

  char lider[20];
  int idadeLider;

  char entregador[20];
  int idadeEntregador;

  char piloto[20];
  int idadePiloto;

};

void lerQuantidade(int *qtd){

  scanf("%d", qtd);

}
//Manter como especificado
TADduende *alocaDuendes(TADduende *D, int qtd){

  D = (TADduende*) malloc (qtd * sizeof(TADduende));

  if (D == NULL)
  {
    printf("Memoria insuficiente\n");
    exit(1);
  }
  
  return D;

}

//Manter como especificado
TADtime *alocaTimes(TADtime *T, int qtd){

  T = (TADtime*) malloc ( qtd * sizeof(TADtime));
  if (T == NULL)
  {
    printf("Memoria insuficiente\n");
    exit(1);
  }
  
  return T;

}

//Manter como especificado
TADduende *desalocaDuendes(TADduende *D){

  free (D);

  return NULL;

}

//Manter como especificado
TADtime *desalocaTimes(TADtime *T){

  free (T);

  return NULL;
  
}

//Manter como especificado
void lerDuendes(TADduende *D, int qtd){
  int i;
  for(i = 0; i < qtd ; i++)
  {
    scanf("%s", D[i].nome);
    scanf(" %d", &D[i].idade);
    D[i].escalado = 0 ;
  }
  
  //ler nome e idade de cada duente
  //aproveitar para colocar o valor 0 no campo escalado
}

//Manter como especificado
void escalarTimes(TADduende *D, TADtime *T, int qtd){
  int i, indice;
  //completar o XXX
  int times = qtd / 3 ;
  for (i=0; i<times; i++)
  {
    indice = proximoMaisVelho(D, qtd);
    //marcar o duende do indice como escalado
    D[indice].escalado = 1 ;
    
    //a linha abaixo copia o nome do duende para a estrutura do time
    strcpy(T[i].lider, D[indice].nome);
    T[i].idadeLider = D[indice].idade;
    //copiar a idade
  }

  for (i=0; i<times; i++)
  {
    indice = proximoMaisVelho(D, qtd);
    //marcar o duende do indice como escalado
    D[indice].escalado = 1 ;
    
    //a linha abaixo copia o nome do duende para a estrutura do time
    strcpy(T[i].entregador, D[indice].nome);
    T[i].idadeEntregador = D[indice].idade;
    //copiar a idade
  }

  for (i=0; i<times; i++)
  {
    indice = proximoMaisVelho(D, qtd);
    //marcar o duende do indice como escalado
    D[indice].escalado = 1 ;
    
    //a linha abaixo copia o nome do duende para a estrutura do time
    strcpy(T[i].piloto, D[indice].nome);
    T[i].idadePiloto = D[indice].idade;
    //copiar a idade
  }

  //repetir o laco acima, mas para o entregador
  //repetir o laco acima, mara para o piloto
}

int proximoMaisVelho(TADduende *D, int qtd){
  int indice;
  int aux = 0;
  //determinar o indice do duende mais velho nao escalado ainda
  for(int i = 0; i < qtd ; i++)
  {
    if (D[i].escalado == 0 )
    {
       if(D[i].idade > aux)
       {
         aux = D[i].idade ;
         indice = i ;
       }
    }
  }
  
  //variaveis adicionais podem ser criadas
  return indice;
  
}

//Manter como especificado
void printTimes(TADtime *T, int qtd){

  for(int i = 0 ; i < qtd ; i++)
  {
    printf("Time %d\n%s %d\n%s %d\n%s %d\n\n", i + 1 , T[i].lider , T[i].idadeLider , T[i].entregador , T[i].idadeEntregador , T[i].piloto , T[i].idadePiloto);
  }
}
