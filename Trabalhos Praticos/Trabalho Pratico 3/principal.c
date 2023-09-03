#include "buscabinaria.h"
#include <stdio.h>

int main(){

    long int n , a , *Tiras ;
    double altura; // Altura do corte feito a h cm em relação a base
    
    for(;;){
        scanf("%ld", &n);
        scanf("%ld", &a);

        if(n == 0 && a == 0){
            break;
        }

        Tiras = alocaTiras(Tiras, n);

        for(int i = 0 ; i < n ; i++){
            scanf("%ld", &Tiras[i]);
        }
        
        if(casosAnormais(Tiras,n,a) == 1){
            insertionsort(Tiras, n);
            altura = buscaAltura(Tiras,n,a,0,Tiras[n - 1]);
            printf("%.4lf\n", altura);
        }
        
        Tiras = desalocarTiras(Tiras);
    }
    return 0;
}