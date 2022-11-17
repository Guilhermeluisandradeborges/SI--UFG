/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N, i, l, j, k, o=0;
    double vet1[1000000], mediana, elementomed;
    double vet2[1000000], p, temp;
    scanf ("%d", &N);
    for (i=0; i<N; i++)
    {
        scanf ("%lf", &vet1[i]);
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
    if (N%2==0)
    {
        mediana=(vet2[(N/2)-1]+vet2[(N/2)])/2;
        printf ("%.2lf", mediana);
    }
    else
    {
        mediana=(vet2[(N-1)/2]);
        printf ("%.2lf", mediana);
    }
    return 0;
}
