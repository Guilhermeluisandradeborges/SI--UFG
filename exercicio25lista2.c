#include <stdio.h>
int main()
{
    int vetnumof[50000], N, i, l;
    int vetnumapost[50000], o, k, j, temp, z=0,y;
    int v, cont=0;
    int vetacertos[50000];
    
    int n4=0, n5=0, n6=0;
    for (i=1; i<=6; i++)
    {
        scanf ("%d", &vetnumof[i]);
    }
    scanf ("%d", &N);
    if (N<1 || N>50000)
        {
            return 0;
        }
    for (i=1; i<=N*6; i++)
    {
        scanf ("%d", &vetnumapost[i]);
        if (vetnumapost[i]<1 || vetnumapost[i]>60)
        {
            return 0;
        }
    }
    
    for (k = 0, o=0; k < N; k++, o++)
    {
        cont=0;
        for(y=1; y<=6; y++)
        {
            for (j = k*6 + 1; j <= 6*(k+1); j++)
            {
                if (vetnumapost[j]==vetnumof[y])
                {
                cont++;
                }
                if (j == 6*(k+1))
                {
                vetacertos[o]=cont; 
                }
            }
        }
    }
    for (i=0; i<N; i++)
    {
        if (vetacertos[i]==6)
        {
            n6++;
        }
        else if (vetacertos[i]==5)
        {
            n5++;
        }
        else if (vetacertos[i]==4)
        {
            n4++;
        }
    }
    if (n6==0)
    {
        printf("Nao houve acertador para sena\n");
    }
    else if (n6>0)
    {
        printf("Houve %d acertador(es) da sena\n", n6);
    }
    if (n5==0)
    {
        printf("Nao houve acertador para quina\n");
    }
    else if (n5>0)
    {
        printf("Houve %d acertador(es) da quina\n", n5);
    }
    if (n4==0)
    {
        printf("Nao houve acertador para quadra\n");
    }
    else if (n4>0)
    {
        printf("Houve %d acertador(es) da quadra\n", n4);
    }
     return 0; 
}