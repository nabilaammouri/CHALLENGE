#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Longeur , Largeur , aire ,perimetre ;
    printf("veuillez entrer la longeur :");
    scanf("%f" ,&Longeur);
    printf("veuillez entrer la largeur :");
    scanf("%f" ,&Largeur);
    aire = (Largeur * Longeur);
    perimetre =2 * (Largeur + Longeur);
    printf("l'aire est : %.2f");
    printf("perimetre est : %.2f");

     return 0;

