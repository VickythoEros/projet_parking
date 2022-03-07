#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


// menu principal 
int menu_principal(){
    system("clear");
    int choix;

    printf("\n===================MENU================\n");
    printf("    1 - Ajouter un vehicule au parking \n");
    printf("    2 - Modifier le statut d'un vehicule \n");
    printf("    3 - Voir la liste des vehicule  \n");
    printf("    4 - Afficher les informations sur un vehicule \n");
    printf("    5 - Afficher les informations sur un parking \n");
    printf("    6 - Quitter \n");
    printf("=======================================\n");
    printf("    Entrer votre choix : ");
    scanf("%d",&choix);

    return choix;

}//fin


void modifier_statut_vehicule(int connexion){
    system("clear");
    char matricule[] = " ";

    printf("\n================== MODIFIER STATUT VEHICULE ===============\n");
    printf("    Entrer le matricule du vehicule :");
    scanf("%s",matricule);
    

}


// choix tu type de vehicule
int choix_type_vehicule(){
    int choix;

    printf("    1 - Voiture \n");
    printf("    2 - Camions \n");
    printf("    3 - Moto  \n");

    printf("    Entrer votre choix : ");
    scanf("%d",&choix);
    
    return choix;

}

// menu permettant d'ajouter un vehicule 
int menu_ajout_vehicule(int connexion){
    system("clear");
    char matricule[] = " ";
    char modele[] = " ";
    char couleur[] = " ";
    int type_vehicule;

    
    printf("\n================== AJOUT VEHICULE ===============\n");

    printf("    Entrer le matricule du vehicule \n");
    scanf("%s",matricule);
    
    printf("    Entrer le modele du vehicule \n");
    scanf("%s",modele);

    printf("    Entrer la couleur du vehicule \n");
    scanf("%s",couleur);
    
    printf("    Entrer le modele du vehicule \n");
    type_vehicule = choix_type_vehicule();
    printf("\n");


    // retourner l'identifaint de l'enregistrement de la voiture si tout OK
    
  
}


void ajout_proprietaire_vehicule(int connexion){
    char nom[] = " ";
    char prenom[] = " ";

    printf("\n================= Ajout proprietaire ==============\n");
    printf("    Entrer le nom : ");
    scanf("%s",nom);
    printf("    Entrer le prenom : ");
    scanf("%s",prenom);

    // ajout proprietaire dans la base de données 

    

}