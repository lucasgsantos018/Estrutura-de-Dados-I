void shellSort ( int *v , int n);

void shellSort (int *v , int n)
{
    int h;
    for(h = 1; h < n ; h++)
    {
        h = 3 * h + 1 ;
    }

    do
    {
        h = (h - 1) / 3 ;
        for(int i = h ; i < n ; i++)
        {
            int aux = v[i];
            int j = i ;

            while (v[j - h] > aux)
            {
                v[j] = v[j - h];
                j -= h;
                if(j < h)
                {
                    break;
                }
            }
            v[j] = aux;
        }
    } while (h != 1);
    

}