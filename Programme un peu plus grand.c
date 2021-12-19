/*! Commentaire de fichier (doxygen) 
Darrigrand  Fabien 
Porgramme un peu plus grand */

#include<stdio.h>

void tablemultiplication(int n){
	int i;						//Entier i
	for(i=1; i<11; i=i+1){		//Pour i=1 et i<11 ajouter i à i+1
	printf("%d \n" ,n );		//Affichage
    printf("%d \n",i );			//Affichage
    printf("%d \n",i*n );		//Affichage
	}
}

double solequation(void){
	//Variables
	float precision;		
	float a;				
	float b;
	float m;		
	float fm;
	float fb;
	precision = 0.0001;
	a=-15;
	b=-10;
	fb=b*b*b+12*b*b+1;			
	while (b-a>precision) {		//tant que
		m=(a+b)/2;				
		fm=m*m*m+12*m*m+1;		
		if (fm*fb>0){		//Si (fm*fb)>0	
			b=m;
		}
		else {				//Sinon
			a=m;
		}
	}
	printf("La solution de l'équation appartient à %.5f \n" ,m);	//Affichage
	return(0);
}

long double factorielle(int n){
	long double f;		//
	int i;		//Entier i
	f=1;		
	if (n>-1){		//Si 
		for (i=2; i<n+1; i=i+1){		//Pour i=, i<n+1, i prend +1
			f=f*i;		
		}
	}
	return(f);
}

int main (void){
	int menu;		//entier menu
	int n;			//entier n
	printf("Veuillez saisir une option entre 1, 2 et 3\n");			//Affichage
	scanf("%d" ,&menu);			//la variable menu prend la valeur saisie
	switch (menu){
		case 1:	
			printf("Vous avez choisis la table de multiplication\n");   //Affichage
			printf("Quelle table de multiplication?\n");				//Affichage
			scanf("%d" ,&n);		//la variable n prend la valeur saisie
			tablemultiplication(n);
			break;
		case 2:			
			printf("Vous avez choisis la solution de l'équation\n"); //Affichage
			printf("" ,solequation());
			break;
		case 3:			
			printf("Vous avez choisis la factorielle\n");		//Affichage
			printf("Quelle factorielle?\n");					//Affichage
			scanf("%d" ,&n);		//la variable n prend la valeur saisie
			printf("Résulat = %Lf \n" ,factorielle(n));			//Affichage
			break;
		default :
			printf("Erreur de saisie\n");						//Affichage
			break;
	 }
	 return(0);
}
