#include <stdio.h>
int main()
{
    int vet1[10000], N, i, l;
    int k, j, temp, z=1;
    while (z!=0)
    {
    scanf ("%d", &N);
    if (N<1 || N>5000)
        {
            return 0;
        }
    if (z!=0)
    {
    for (i=0; i<N; i++)
    {
        scanf ("%d", &vet1[i]);
    if (vet1[i]<0 || vet1[i]>5000)
        {
            return 0;
        }
    }
    for (k = 0; k < N; k++)
    {
        for (j = k; j < N; j++)
        {
            if (vet1[k] >= vet1[j])
            {
                int temp = vet1[k];
                vet1[k] = vet1[j];
                vet1[j] = temp;
            }
        }
    }
    for (k = 0; k < N; k++)
    {
        if (k==(N-1))
        {
        printf("%d", vet1[k]);
        }
        else
        {
        printf("%d ", vet1[k]);
        }


    }
    printf("\n");
    z++;
    }
    }
    return 0;
}