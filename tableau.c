#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i  , j , n ;
    printf("entrer le nombre des elements :\n =");
    scanf("%d",&n);
    int T[n];
    for (i = 0 ; i < n ; i++)
    {
        printf("T[%d]=" ,i);
        scanf("%d" ,&T[i]);

    }
    printf("Donc les elements de tableau est :\n");
    printf("\[");
    for (i = 0 ; i < n ; i++)
    {
        printf("%d\t" ,T[i]);

    }
    printf("\[");
   for (i = 0 ; i < n ; i++)

   {
   if (T[i]>T[j]){
   }
       int x;
       x=T[i];
       T[i]=T[j];
       T[j]=x;
       }

   printf("\n donc le tri du tableau est :\n");
   for (int f=0 ;f<n ;f++)
    printf("%d\t" ,T[i]);

   return 0;
}
