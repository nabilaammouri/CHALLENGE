#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 #include "file.h"
 #include"fonction.h"


int main()
{

    Contact contacts[1000];
    int n=0;
    int choix;
     do{
        printf("1.Ajouter un livre au stock.\n");
        printf("2.Afficher tous les livres disponibles.\n");
        printf("3.Rechercher un livre par son titre.\n");
        printf("4.Mettre a jour la quantité d'un livre.\n");
        printf("5.Supprimer un livre du stock.\n");
        printf("6.Afficher le nombre total de livres en stock.\n");
        printf("entrer votre choix:\n");
        scanf("%d", &choix);

        switch(choix) {
            case 1: {
             ajouter(Contacts, int* n);
             break;
            }
            case 2 : {
             afficher(Contacts, int n);
             break;
            }
            case 3: {
             rechercher(Contacts, int* n);
             break;
            }
            case 4: {
             supprimer(Contacts, int* n);
             break;
            }
            case 5: {
                modifier(Contacts, int* n);
                break;
            }
            case 6 : {
                printf("by");
            }
            default :{
                printf("saisir un nombre entre 1 et 7");
            }
    }
    }while(choix!=6);




}

    return 0;
}
main
file.h                                                                                                         #ifndef FONTION_H

 typedef struct Contact{
    char nom[1000][100];
    char num[1000][100];
    char adresse[1000][100];
};

void ajouter(Contact Contacts[], int* n);
void modifier(Contact Contacts[], int n);
void supprimer(Contact Contacts[], int* n);
void afficher(Contact Contacts[], int n);
void rechercher(Contact Contacts[], int n);

#enif
tikitaka5137 — Aujourd’hui à 14:32
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 #include "file.h"



void ajouter(Contact Contacts[], int* n){
    if(n>1000){
        printf("y a pas d'espace.\n");
        return;
    }
    printf("Entrer le nom :\n");
    scanf("[^\n]", Contacts[n].nom);
     printf("Entrer le numero :\n");
    scanf("[^\n]", Contacts[n].num);
     printf("Entrer l'adresse mail :\n");
    scanf("[^\n]", Contacts[n].adresse);
    (*n)++;
    printf("Le contact est ajoute.\n");
}

void modifier(Contact Contacts[], int n){
    char element[1000];
    int found=0;
        printf("Entrer le contact que vous voulez modifier.\n");
        scanf("[^\n]", element);
        for(int i=0; i<n; i++){
        if(strcmp(Contacts[i].nom, element)==0){
            printf("Modifier le numero de telephone: \n");
        scanf("[^\n]", Contacts[i].num);
        printf("Modifier l'adresse mail: \n");
        scanf("[^\n]", Contacts[i].adresse);
                printf("Le contact est modifier .\n");
                found=1;
                return;
        }
        if(!found){
            printf("Le contact non trouver.\n");
        }
}
}
void supprimer(Contact Contacts[], int* n){
    char sup[1000];
    printf("Entrer le contact que vous voulez supprimer:\n");
            scanf("[^\n]", sup);
            for(int i=0; i<n; i++){
                if(strcmp(Contacts[i].nom, sup)==0){
                    for(int j=i; j<n-1;j++){
                        Contacts[j]=Contacts[j+1];

                    }
                    (*n)--;
                    printf("Le contact est supprime.\n");
                    return;
                }
            }
            printf("Contact non trouver.\n");
}

void afficher(Contact Contacts[], int n){
    if(n==0){
        printf("La liste des contacts est vide.\n");
        return;
    }
    printf("La liste des contacts est :\n");
    for(int i=0; i<n; i++){
        printf("le contact %d est: %s / numero: %s / Adresse mail: %s.\n",i+1, Contacts[i].nom, Contacts[i].num, Contacts[i].adresse);


    }
    return;
}

void rechercher(Contact Contacts[], int n){
    char  recherche[1000];
    for(int i=0; i<n;i++){
        if(strcmp(Contacts[i].nom, recherche)==0){
                printf("le contact est trouve: %s / numero: %s / Adresse mail: %s.\n",i+1, Contacts[i].nom, Contacts[i].num, Contacts[i].adresse);
            return;
        }
    }
    printf("Le contact non trouver.\n");
    return;
}
