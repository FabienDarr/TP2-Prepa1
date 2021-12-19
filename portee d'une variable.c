/*! Commentaire de fichier (doxygen) 
Darrigrand Fabien
Portee d'une variable */

/* Inclusion des entetes de libraires */
#include <stdio.h>
#include <stdlib.h>
#define ERREUR_SAISIE -1
/*! Commentaire de la fonction main (doxygen) */
void Bidon(void);

int main(void)
    {
       int nb;              //Entier nb
       printf("Veuillez saisir un nombre :");   //Affiche
       scanf("%d", &nb);    //la variable nb prend la valeur saisie
       printf("Valeur saisi : %d\n" , nb);      //Affiche
       Bidon();             //Fonction Bidon
    }
    void Bidon(void){

        int int_retour;     //Entier int_retour
        int nb;             //Entier int_retour
        printf("Veuillez saisir un 2eme nombre :");     //Affiche
        int_retour = scanf("%d" , &nb);     //la variable nb prend la valeur saisie
        printf("2eme Valeur saisi : %d\n" , nb);        //Affiche
        return (0);
    }
