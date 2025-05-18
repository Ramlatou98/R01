#include <stdio.h>

int main()
{
//Declaration des variables
    int nbr, i;
    //Demander à l'utilisateur d'entrer un nombre
    printf(" Entrez un entier: ");
    scanf("%d",&nbr);
    //Affichage de l'en-tête de la table
    printf("\n Table de multiplication de %d est: \n", nbr);
	//Utilisation de la boucle for pour generer la table
    for(i=1; i<=10; ++i)
    {
        printf(" %d * %d = %d \n", nbr, i, nbr*i);
    }
    //Fin du code
    return 0;
}

