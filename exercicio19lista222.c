#include <stdio.h>
int main(){
    int v[1000];
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    for(i=0; i<n; i++){
        if((v[i]) != (v[i-1]))
        {
            printf("%d\n", v[i]);
        }
    }
}