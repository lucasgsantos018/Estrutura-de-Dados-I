#include "arvore.h"
#include <stdio.h>

int main ()
{
	int n;
	TItem no;
	TArvore arvore;
	TArvore_Inicia(&arvore);
	scanf("%d", &n);
	//ler o primeiro no e criar a raiz da arvore
	scanf("%ld", &no.Chave);
	TArvore_Insere_Raiz(&arvore,no);
	
	for(int i = 1; i<n; i++) {
		scanf("%ld", &no.Chave);
		TArvore_Insere(&arvore,no);
	}

	printf("PREFIXA:");
	Prefixa(arvore);
	printf("\n");

	printf("INFIXA:");
	Infixa(arvore);
	printf("\n");

	printf("POSFIXA:");
	Posfixa(arvore);
	printf("\n");

	return 0;
}
