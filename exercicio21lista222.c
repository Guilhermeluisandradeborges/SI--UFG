#include <stdio.h>
 
int main()
{
    int i, l, j, k;
    int num, ndigitos=1, digitosrest;
    int numsep[100], p, temp, o=0;
    while (ndigitos!=0) 
    {
        scanf("%d %d",&ndigitos, &digitosrest);
        scanf("%d", &num);
        for (k = 0; k < ndigitos -1; k++, num/=10)
    {
        numsep[k]= num%10;
    }
        numsep[ndigitos-1]=num;
        o=ndigitos+1;
    for (k = 0; k < o - 1; k++)
    {
        for (j = k; j < o - 1; j++)
        {
                if(numsep[k]>numsep[j])
                {
                int temp = numsep[k];
                numsep[k] = numsep[j];
                numsep[j] = temp;
                }
        }
    }
    p=ndigitos - digitosrest - 1;
    for (k = ndigitos - 1; k > p; k--)
    {
        printf("%d", numsep[k]);
    }
    }
    return 0;
}