#include <stdio.h>
#include <stdlib.h>

int main()

{
    int j,m,a;
    printf("veuillez entrer une date de format jj/mm/aaaa :");
    scanf("%d/%d/%d",&j,&m,&a);
    switch (m){
case 1:printf("%d-janvier-%d",j,a);
     break;
case 2:printf("%d-fevrier-%d" ,j,a);
     break;
case 3:printf("%d-mars-%d" ,j,a);
     break;
case 4:printf("%d-april-%d" ,j,a);
     break;
case 5:printf("%d-mai-%d" ,j,a);
     break;
case 6:printf("%d-juin-%d" ,j,a);
     break;
case 7:printf("%d-juillet-%d" ,j,a);
     break;
case 8:printf("%d-aout-%d" ,j,a);
     break;
case 9:printf("%d-septemre-%d" ,j,a);
     break;
case 10:printf("%d-octobre-%d" ,j,a);
     break;
case 11:printf("%d-novembre-%d" ,j,a);
     break;
case 12:printf("%d-decembre-%d" ,j,a);



    return 0;
    }}
