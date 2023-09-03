#include "pilha.h"
#include <stdio.h>
#include <string.h>

int main()
{
        Pilha pilha;
        char ch;
        Item item;
        int aux1 = 0, aux2 = 0;

        Pilha_Inicia(&pilha);

        while (scanf("%c", &ch)!=EOF)
        {
          Pilha_Push(&pilha, ch);
          //processar cada elemento lido
          if (ch == '(')
            aux1++;
          else if (ch == ')')
            aux2++;
        }

        //determinar o resultado
        if (aux1 == aux2)
          printf("correto\n");
        else
          printf("incorreto\n");


        Pilha_Esvazia(&pilha);

        return 0;//nao remova
}
