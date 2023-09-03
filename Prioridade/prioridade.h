# ifndef prioridade_h
# define prioridade_h

typedef struct{
	int tempousado;
	int id;
	int valortempo;
} TipoCaixa;

TipoCaixa *alocaVetor(TipoCaixa *heap, int n);
TipoCaixa *desalocaVetor(TipoCaixa *heap);
void Heap_Constroi(TipoCaixa *heap, int n);
void Heap_Refaz(TipoCaixa *heap, int esq, int dir);
# endif
