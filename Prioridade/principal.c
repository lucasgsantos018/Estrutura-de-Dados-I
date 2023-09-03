#include "prioridade.h"
#include <stdio.h>
//Robson Novato 20.1.4018
int main ()
{
	int n, m, disp;
	int trocador = 0, resposta = 0;
	TipoCaixa *heap;

	scanf("%d", &n);
	scanf("%d", &m);
	
	heap = alocaVetor(heap, n);
	
	for (int i = 0; i < n; i++) {
  		scanf("%d", &heap[i].tempousado);
  		heap[i].id = i;
  		heap[i].valortempo = 0;
  	
	  }	
	while(m--) {
		scanf("%d", &disp);
		if(trocador < n){
			int auxiliar = heap[trocador].valortempo + (disp * heap[trocador].tempousado);
			heap[trocador].valortempo = auxiliar;
			if(heap[trocador].valortempo > resposta){
				resposta = heap[trocador].valortempo;
			}
		}
		else{
			Heap_Constroi(heap, n);	
			int auxiliar2 = heap[0].valortempo + (disp * heap[0].tempousado);
			heap[0].valortempo = auxiliar2;
			if(heap[0].valortempo > resposta){
				resposta = heap[0].valortempo;
			}
		}
	trocador = trocador +1;
	}

	heap = desalocaVetor(heap);
	printf("%d",resposta);
	
	return 0;
}
