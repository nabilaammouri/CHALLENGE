#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age ;
       printf("Veuillez entrer l'age :");
       scanf("%d" ,&age);
    if (age <= 18)
       printf("entrer la catagorie est vous n etes pas eligible pour voter");
    else
        printf("entrer la catagorie est vous etes eligible pour voter");
    return 0;