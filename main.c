#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(){

    acceuil:

    int user_choice_acceuil;
    int prefernce_user;

    menu_acceuil(); // on appelle et on execute la fonction munu acceuil pour afficher le menu
    printf("\n");
    printf(" \t votre choix: ");
    scanf("%d", &user_choice_acceuil);
    gerer_menu_acceuil(user_choice_acceuil);
    system("cls");
    menu_preference();
    printf("\n");
    printf(" \t votre choix: ");
    scanf("%d", &prefernce_user);
    gerer_preference(prefernce_user);

    return 0;
}