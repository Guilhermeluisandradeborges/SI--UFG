#include <stdio.h>
int main()
{
    int vet1[1000], N, i, l, vet2[1000], o=0, p=0, q, k, j, temp, temp1;
    scanf ("%d", &N);
    for (i=0; i<N; i++)
    {
        scanf ("%d", &vet1[i]);
        getchar ();
    }
    for (l=0; l<=N; l++)
    {
        
            vet2[o]=vet1[l];
            o++;
    }
    for (k = 0; k < o - 1; k++)
    {
        for (j = k; j < o - 1; j++)
        {
            if (vet2[k] > vet2[j])
            {
                int temp = vet2[k];
                vet2[k] = vet2[j];
                vet2[j] = temp;
            }
        }
    }
    for (k = 0; k < o - 1; k++)
    {
        printf("%d\n", vet2[k]);
    }
    return 0;
}