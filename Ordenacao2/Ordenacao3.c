#include <stdio.h>

void quickSort(int *v , int l, int r);

int partition(int *v , int l , int r);


int partition(int *v, int l , int r)
{
    int x = v[r];
    int i = l - 1;
    int *A = v ;

    for(int j = l ; j < r ; j++)
    {
        if(A[j] <= x)
        {
            i += 1;
            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }
    int aux = A[i + 1];
    A[i + 1] = A[r];
    A[r] = aux;

    return i + 1;

}


void quickSort(int *v,int l, int r)
{
    int q ;

    if ( l < r )
    {
        q = partition(v , l , r);
        quickSort(v , l , q - 1);
        quickSort(v , q + 1 , r );
        
    }


}