#include <stdio.h>
int main()
{
    int vet1[10000], N=1, i, l;
    int vet2[10000], o=0, k, j, temp;
    int v, cont=0;
    while (N!=0)
    {
    scanf ("%d", &N);
    if (N<1 || N>10000)
        {
            return 0;
        }
    for (i=0; i<N; i++)
    {
        scanf ("%d", &vet1[i]);
        if (vet1[i]<0 || vet1[i]>1000)
        {
            return 0;
        }
    }
    for (i=0; i<N; i++)
    {
    vet2[i]=vet1[i];
    }
    for (k = 0; k < N; k++)
    {
        for (j = k+1; j < N; j++)
        {
            if (vet2[k] >= vet2[j])
            {
                int temp = vet2[k];
                vet2[k] = vet2[j];
                vet2[j] = temp;
            }
        }
    }
    for (i=0; i<N; i++)
    {
        if (vet1[i]==vet2[N-1])
        {
        printf("%d %d\n",   i, vet2[N-1]);
        }
    }
    }
     return 0; 
}