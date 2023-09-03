#include <stdio.h>
#include <stdlib.h>

void merge(int *v, int l, int m, int r);
void mergesort(int *v, int l, int r);

void merge(int *v, int l, int m, int r)
{
    int *vet_l , *vet_r;
    vet_l = (int *) malloc ((m - l + 1)*sizeof(int));
    vet_r = (int *) malloc ((r - m)*sizeof(int));

    for(int i = 0; i < m - l + 1 , i++)
        vet_l[i] = v[i + l];
    for(int j = 0; j < r - m ; j++)
        vet_r[j] = v[m + j + 1];

    int i = 0 , j = 0 ;

    for(int k = l ; k <= r ; k++)
    {
        if(i == m - l + 1)
            v[k] = vet_r[j++];
        else if(j == r - m)
            v[k] = vet_l[i++];
        else if(vet_l[i] <= vet_r[j])
            v[k] = vet_l[i++];
        else
            v[k] = vet_r[j++];
    }

    free(vet_l);
    free(vet_r);

}

void mergesort(int *v, int l, int r)
{
    int m ;

    if(l < r)
    {

        m = (l + r) / 2 ; 
        mergesort(v,l,r);
        mergesort(v,m+1,r);
        merge(v,l,m,r);

    }

}
