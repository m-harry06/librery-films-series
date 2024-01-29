#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "menu.h"

typedef struct personne {
    char nom[50];
    char prenom[50];
    char nomutilisateur[20];
    char password[20];
    int age;
} personne;

/**
*affiche le menu de la page acceuil
*/

void menu_acceuil(){

    printf("-----------------------------------------------------------------------------\n");

    printf (" \t \t \t ** Bienvenue chez stocke-Films&livres ** \n");
    printf("\n \t \t \t \t  *** Menu principal *** \n ");
    printf("-----------------------------------------------------------------------------\n");
    printf("\n\t faites un choix \n");
    printf (" \n \t \t |1.Connectez vous a votre espace personnel \n \t \t |2.Creer un compte \n \t \t |3.Contacter un aministrateur \n");

    
}

void gerer_menu_acceuil(int choix){
    switch (choix){
        case 1:
            connecter_menu();
            break;
        case 2:
            enregistrer_menu();
            break;
        case 3:
            contact_admin_menu();
            break;
        default:
            menu_acceuil();
            break;
    }
}

void contact_admin_menu(){


}

void enregistrer_menu() {
    personne user;
    char ch;
    int i = 0;  // Initialisez i à 0 avant de l'utiliser

    printf("-----------------------------------------------------------------------------\n");
    printf("\t\t Nouvel utilisateur \n");
    printf("-----------------------------------------------------------------------------\n");

    printf("Entrer votre nom: ");
    fgets(user.nom, 50, stdin);
    fgets(user.nom, 50, stdin);
    printf("Entrer votre prenom: ");
    fgets(user.prenom, 50, stdin);
    printf("Entrer votre nom d'utilisateur *il est unique a chaque utilisateur: ");
    fgets(user.nomutilisateur, 20, stdin);
    printf("Entrer votre mot de passe: ");

    while ((ch = getch()) != '\r') {

        if(ch != '\b'){
        user.password[i] = ch;
        printf(".");
        i++;
        }else{
            printf("\b \b");
            i--;
        }
    }
    user.password[i] = '\0';

    printf ("\n");

    printf("Quel est votre age ? ");
    scanf("%d", &user.age);

    // Affichage des valeurs entrées (pour vérification)
    printf("Nom: %s", user.nom);
    printf("Prenom: %s", user.prenom);
    printf("Nom d'utilisateur: %s", user.nomutilisateur);
    printf("Mot de passe: %s \n", user.password);  // À des fins de démonstration seulement. NE PAS FAIRE pour des mots de passe réels.
    printf("Age: %d\n", user.age);

    int choix = 0;
    while (choix != 1)
    {
        printf("taper 1 pour revenir au menu principal: ");
        scanf("%d", &choix);
    }
    
}

void connecter_menu(){


}