#include "fib.h"
#include<stdio.h>

int main()
{
    //adicionar variaveis conforme necessidade
    TADfib f;
    int n;
    //fazer a leitura do numero de casos de teste
    scanf("%d", &n);
    //ler o caso de teste e processar antes de ler o proximo
    for(int i = 0; i < n ; i++)
    {
        scanf("%d", &f.i);
        f.chamadas = -1;
        f.resultado = fibonacci(f.i, &f);
        printf("fib(%d) = %ld chamadas = %ld\n", f.i , f.chamadas , f.resultado);
        //imprimir a resposta no formato adequado
    }
    
    return 0;//nao remova
}
