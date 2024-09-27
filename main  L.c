#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S, i ;
    S = 0 ;
    for(i=1;i<=20;i++){
            S=S+i;
    }
    printf("La somme des premiers positifs est : %d",S);

    return 0;
}
