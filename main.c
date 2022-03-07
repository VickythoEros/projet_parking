#include <stdio.h>
#include <stdlib.h>
#include "headers.h"





int main(int argc, char **argv)
{
    // Conexxion a la base de donnees

    // variables
    int choix_menu_principal;
    int connexion_fake = 100;

    menu : choix_menu_principal = menu_principal();

    //controlle_menu_switch(choix_menu_principal,connexion_fake);
      switch(choix_menu_principal){
        case 1:{
            menu_ajout_vehicule(connexion_fake);
            goto menu;
        };break;

        case 2:{
            modifier_statut_vehicule(connexion_fake);
        };break;

        default : printf("\n erreur de saisir \n");break;
    }
}
