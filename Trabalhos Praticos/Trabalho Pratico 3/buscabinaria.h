#ifndef buscabinaria_h
#define buscabinaria_h

long int *alocaTiras(long int *Tiras , long int n);
long int *desalocarTiras(long int *Tiras);
int casosAnormais(long int *Tiras, long int n , long int a);
double buscaAltura(long int *Tiras, long int n, long int a , double base , double topo);
void insertionsort(long int *Tiras, long int n);

#endif