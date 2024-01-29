#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(){

    int user_choice_acceuil;

    debut:
    
    menu_acceuil(); // on appelle et on execute la fonction munu acceuil pour afficher le menu
    printf(" \t votre choix: ");
    scanf("%d", &user_choice_acceuil);
    gerer_menu_acceuil(user_choice_acceuil);
    
    goto debut;
    return 0;
}