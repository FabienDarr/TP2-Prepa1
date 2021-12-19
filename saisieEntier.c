/*! Commentaire de fichier (doxygen) 
Fabien Darrigrand
Saisie d'entier*/

/* Inclusion des entetes de libraires */
#include <stdio.h>
#include <stdlib.h>
#define ERREUR_SAISIE -1
/*! Commentaire de la fonction main (doxygen) */
int saisieEntier(void);

int main(void)
    {
       int nb;      //Entier nb
       nb = saisieEntier();
       printf("Valeur saisi : %d\n" , nb);      //Affichage nb
    }
    
    int saisieEntier(){

        int int_retour;     //Entier int_retour
        int nb;             //Entier nb
        
        printf("Saisir un entier : ");      //Affichage
        int_retour = scanf("%d" , &nb);     //Valeur nb inclut dans la variable int_retour
        
        if(int_retour == 0) {       //Verification int_retour = 0
            fprintf(stderr, "Entree incorrecte \n");        //Affichage Entree correcte si caracteres = entree
            exit(ERREUR_SAISIE);
        }
        return(nb);
    }
