
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
/*Écrivez une fonction qui retourne un pointeur vers un espace nouvellement alloué en mémoire, qui contient une copie de la 
chaîne de caractères donnée en paramètre.

Prototype : char *_strdup(char *str);

La fonction _strdup() retourne un pointeur vers une nouvelle chaîne de caractères qui est une duplication de la chaîne str. 
La mémoire pour la nouvelle chaîne est obtenue avec malloc et peut être libérée avec free.
Elle retourne NULL si str = NULL.
En cas de succès, la fonction _strdup retourne un pointeur vers la chaîne dupliquée. Elle retourne NULL
si la mémoire disponible est insuffisante.
Pour information : La bibliothèque standard fournit une fonction similaire : strdup. Lancez man strdup pour en savoir plus.*/
char *_strdup(char *str)
{
    int i;
    int longeur;
    char *copie;

    if(str == NULL)
    {
        return NULL;
    }
    /*
     Calculer la longeur de la chaîne*/
  while (str[longeur] != '\0') 
    {
    longeur++;
    }

    
    /*Allouer de la mémoire pour la nouvelle chaîne*/


    copie = malloc(sizeof(char) * (longeur + 1));
    if (copie == NULL)
        return NULL;

    for ( i = 0; i < longeur; i++)
        copie[i] = str[i];
    copie[longeur] = '\0';

    return copie;
}
