#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somme=0, moyenne , n;
    printf("Entrer la taille:\n");
    scanf("%d" ,&n);
    int tab[n];
    printf("Entrer les elements du tableau:\n");
    for(int i=0 ; i<n ;i++) {
            printf("l'element %d", i+1);
            scanf("%d" ,&tab[i]);
    }

    for(int i=0; i<5; i++){
            somme+=tab[i];
    }
    moyenne= somme/5;
    printf("La moyenne est %d:\n" ,moyenne);

    return 0;
}
