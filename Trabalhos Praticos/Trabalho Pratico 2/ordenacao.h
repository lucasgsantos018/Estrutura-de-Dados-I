#ifndef ordenacao_h
#define ordenacao_h

typedef struct{
    char nomePais[20];
    int medalhaOuro;
    int medalhaPrata;
    int medalhaBronze;
} Classificacao;

void lerNmrPaises(int *nmrPaises);
Classificacao *alocar(Classificacao *Paises , int nmrPaises );
Classificacao *desalocar(Classificacao *Paises);
void preencherVetor(Classificacao *Paises , int nmrPaises);

void ordenarOuro(Classificacao *Paises ,int nmrPaises);
void ordenarPrata(Classificacao *Paises , int nmrPaises);
void ordenarBronze(Classificacao *Paises , int nmrPaises);
void ordemAlfabetica(Classificacao *Paises , int nmrPaises);
void printarTabela(Classificacao *Paises , int nmrPaises);

# endif