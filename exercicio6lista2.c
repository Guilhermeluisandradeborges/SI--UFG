#include <stdio.h>
int main()
{
    int vet1[1000], N, i, l, soma=0;
    scanf ("%d", &N);
    for (i=0; i<N; i++)
    {
        scanf ("%d", &vet1[i]);
    }
    for (l=0; l<N; l++)
    {
        soma+=vet1[l];
    }
    printf ("%d", soma);
    return 0;
}