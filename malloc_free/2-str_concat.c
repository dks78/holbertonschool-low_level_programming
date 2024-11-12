#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    int longeur = 0;
    int longuer2 = 0;
    char *result;
    int i;
    if(s1 == NULL)
    {
        return NULL;
    }

    while (s1[longeur ] != '\0') 
    {
        longeur ++;
    }


    while (s2[longuer2] != '\0') 
    {
        longuer2++;
    }

   result = malloc((longeur + longuer2 + 1)); /*
    La taille allouée est la somme des longueurs de s1 et s2, plus 1 s
    upplémentaire pour le caractère de fin de chaîne '\0'.
    allouer (longeur + longuer2 + 1) octets.
   */
    if(result == NULL)
    {
        return NULL;
    }
    
    for ( i = 0; i < longeur ; i++)
    {
        result[i] = s1[i];
    } /*Cette boucle copie tous les caractères de s1 dans result. Vous commencez à copier à partir de l'index 0 et continuez jusqu'à la fin de s1 (l'index longeur - 1).
        À la fin de cette boucle, la première partie de result contient la chaîne s1.*/
    for (i = 0; i < longuer2; i++)
    {
        result[longeur + i] = s2[i]; /*
        Cette boucle copie tous les caractères de 
        s2 à la suite de s1 dans result. Les caractères de s2 sont copiés à partir de l'index longeur dans result, donc après la fin de la chaîne s1.
        Pourquoi longeur + i ? Parce que les premiers longeur 
        indices de result contiennent déjà la chaîne s1. Ensuite, nous ajoutons les caractères de s2 après.
        */
    }


    result[longeur  + longuer2] = '\0';


    return result;
}