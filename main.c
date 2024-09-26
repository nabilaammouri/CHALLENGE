#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S , n ;
    S = 0 ;
    for(n=1,n<=10,n++){
            S=S+n;
    }
    printf("La somme des 10 premiers entiers positifs : %d" ,S);
    return 0;

}
