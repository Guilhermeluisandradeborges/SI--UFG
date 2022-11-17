#include <stdio.h>
int main()
{
    int vet1[1000], N, i, l, vet2[1000], o=0, p=0, q, k, j, temp, temp1, vetsuport[100];
    scanf ("%d", &N);
    for (i=0; i<N; i++)
    {
        scanf ("%d", &vet1[i]);
        getchar ();
        vetsuport[i]=vet1[i];
    }
    for (l=N; l>=0; l--)
    {
            vet2[l]=vet1[o];
            o++;
    }
    for (k = 0; k < o - 1; k++)
    {
        for (j = k; j < o - 1; j++)
        {
            if (vetsuport[k] > vetsuport[j])
            {
                int temp = vetsuport[k];
                vetsuport[k] = vetsuport[j];
                vetsuport[j] = temp;
            }
        }
    }
    for (k = 0; k < N; k++)
    {
        printf("%d ", vet1[k]);
    }
    printf("\n");
    for (k = 1; k <= N; k++)
    {
    printf("%d ", vet2[k]);
    }
    printf("\n");
    printf("%d\n", vetsuport[N - 1]);
    printf("%d\n", vetsuport[0]);

    return 0;
}