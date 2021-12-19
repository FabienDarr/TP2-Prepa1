/*! Commentaire de fichier (doxygen) 
Darrigrand  Fabien 
Probleme d'appel de fonction */

/* Inclusion des entetes de libraires */
#include <stdio.h>
#include <stdlib.h>
/*! Commentaire de la fonction main (doxygen) */
void procedure_echange(int nb1, int nb2) { 

      int tmp;                              //entier tmp
      printf("Avant l'echange \n");         //Affichage
      printf("Nombre 1 = %d\n", nb1 );      //Affichage valeur nb1
      printf("Nombre 2 = %d\n", nb2 );      //Affichage valeur nb2
      tmp = nb1;
      nb1 = nb2;
      nb2 = tmp;
      printf("Apres Echange \n");           //Affichage
      printf("Nombre 1 = %d\n", nb1 );      //Affichage valeur nb1
      printf("Nombre 2 = %d\n", nb2 );      //Affichage valeur nb2
    }

    int main(void)
    {
      int nb1;    //Entier nb1
      int nb2;    //Entier nb2
      nb1 = 5;    
      nb2 = 7;
      printf("Avant appel de la fonction \n");
      printf("Nombre 1 = %d\n", nb1 );      //Affichage valeur nb1
      printf("Nombre 2 = %d\n", nb2 );      //Affichage valeur nb2
      printf("Appel de la fonction échange \n");    //Affichage
      procedure_echange(nb1 , nb2);                 //Procedure echange
        printf("Apres appel de la fonction \n");    //Affichage
        printf("Nombre 1 = %d\n", nb1 );    //Affichage valeur nb1
        printf("Nombre 2 = %d\n", nb2 );    //Affichage valeur nb2
      } 
