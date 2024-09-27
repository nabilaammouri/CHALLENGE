#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X1 ,X2 ,Y1 ,Y2 ;
    float XP ,YP ;
    float R1 ,R2 ;

         printf("entrer le 1 ere coordonner X1 et Y1 :");
         scanf("%f %f" ,&X1 ,&Y1);

         printf("entrer le 2 eme coordonner X2 et Y2 :");
         scanf("%f %f" ,&X2 ,&Y2);

         printf("entrer 3 eme coordonner X2 et Y2 :");
         scanf("%f %f" ,&XP ,&XP);

         R1 =(YP - Y1 ) / (XP - X1) ;
         R2 =(YP -Y2 ) / (XP -X1) ;
     if(X1<=XP && XP<=X2 && Y1<=YP && YP<=Y2 && R1 == R2){
         printf("yes");


    return 0;
}
}
