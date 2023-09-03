#include "ordenacao.h"
#include <stdio.h>

int main ()
{

	int *vetor;
	int i, n, movimentos , aux;
	while(scanf("%d", &n), n != 0)
	{
		movimentos = 0;
		//alocar o vetor
		vetor = alocaVetor(vetor, n);
		//preencher o vetor
		for(i = 0 ; i < n ; i++)
		{
			scanf("%d", &aux);
			vetor[i] = aux;
		}
		//ordenar o vetor e determinar o número de movimentos
		ordenacao(vetor,n,&movimentos);
		//imprimir o resultado
		if(movimentos % 2 == 0)
			printf("Carlos\n");
		else
			printf("Marcelo\n");
		//desalocar o vetor
		vetor = desalocaVetor(vetor);
	}

	return 0;
}
