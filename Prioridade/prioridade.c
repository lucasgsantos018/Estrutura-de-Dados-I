#include "prioridade.h"
#include <stdio.h>
#include <stdlib.h>

TipoCaixa *alocaVetor(TipoCaixa *heap, int n){
	for (int i = 0; i < n; i++){
   		heap = malloc (n * sizeof (TipoCaixa)) ;
	}
	return heap;
}

TipoCaixa *desalocaVetor(TipoCaixa *heap){
	free(heap);
	return heap;
}

void Heap_Constroi(TipoCaixa *heap, int n){
	int esq = (n/2) - 1;
	while(esq >= 0){
		Heap_Refaz(heap, esq, n-1);
		esq = esq - 1;
	}
}

void Heap_Refaz(TipoCaixa *heap, int esq, int dir){
	int i = esq;
	int j = i * 2 + 1; 
	
	TipoCaixa retornador = heap[i];

	while(j <= dir){
		if(j<dir){
			if((heap[j].valortempo > heap[j+1].valortempo) ||
			 ((heap[j].valortempo == heap[j+1].valortempo) && (heap[j].id > heap[j+1].id))){
				j = j +1;
			}
		}
		
		if((retornador.valortempo < heap[j].valortempo) ||
		 ((retornador.valortempo == heap[j].valortempo) && (retornador.id < heap[j].id))){ 
			break;
		}
		heap[i] = heap[j];
		i = j;
		j = i * 2 + 1; 
	}
	heap[i] = retornador;
}











