
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  N , i ,est premier ;
    printf("veuillez entrer un nombre :");
    scanf("%d" ,&N).
    est premier =1;
    for(i=2;i<=N/2;i++){
            if(N%i==0){
                    est premier=0;
            break
      }

    }
    if(est premier==1)
        printf("%d est un nombre premier" ,N);
    else
        printf("%d est un nombre non premier" ,N);
        return 0;

}








**************************************************************








 