# R01
# *Objectif du programme :*
#Afficher la *table de multiplication* d’un nombre entier saisi par l’utilisateur, de 1 à 10.
# *Étapes du programme :*
#1. *Déclaration des variables :*
#  int nbr, i;
#  - `nbr` : pour stocker le nombre saisi par l’utilisateur.
#  - `i` : utilisé pour parcourir les nombres de 1 à 10 dans la boucle.
#2. *Demande d’un nombre :*
#   printf(" Entrez un entier: ");
#  scanf("%d",&nbr);
#   - Le programme demande à l'utilisateur d'entrer un nombre entier.
#   - Ce nombre est stocké dans la variable `nbr`.
#3. *Affichage de l'en-tête de la table :*
#   printf("\n Table de multiplication de %d est: \n", nbr);
#4. *Boucle `for` pour générer la table de multiplication :*
#   for(i=1; i<=10; ++i)
#   {
#       printf(" %d * %d = %d \n", nbr, i, nbr*i);
#   } 
#   - La boucle commence de `i = 1` jusqu’à `i = 10`.
#   - À chaque tour, elle affiche une ligne de la table de multiplication du nombre `nbr`.
#5. *Fin du programme :*

#   return 0;
