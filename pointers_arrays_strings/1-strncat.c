
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{

char *ptr = dest; /* 1 :Préserver l’adresse initiale de dest : refs DESTS (ctrl + F )
char *ptr = dest; ici permet de conserver la position de départ de dest tout en manipulant ptr. Cela nous permet de parcourir dest sans changer sa valeur initiale.
Si nous manipulions directement dest pour parcourir la chaîne, nous perdrions l'adresse de départ de dest, ce qui rendrait difficile de retourner la chaîne concaténée au début.
En créant ptr, nous avons un pointeur "temporaire" que nous pouvons déplacer librement sans changer dest lui-même.*/
while (*ptr != '\0')
{
ptr++;
}
while (n > 0 && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
n--;
}

*ptr = '\0';

return (dest);

}
/*dest : la chaîne dans laquelle nous allons ajouter les caractères de src.
src : la chaîne source, dont on va copier au maximum n caractères.
n : le nombre maximum de caractères à copier de src.
Initialisation de ptr : On initialise un pointeur ptr pour qu’il pointe au début de dest. Ce pointeur sera utilisé pour parcourir dest jusqu'à la fin et ajouter les caractères de src.
Étape 1 : Trouver la fin de dest
c
Copier le code
while (*ptr != '\0') {
    ptr++;
}
Objectif : Ce while recherche la fin de la chaîne dest, où on va commencer à ajouter les caractères de src.
Comment ça fonctionne :
Tant que le caractère pointé par ptr n’est pas \0, on avance ptr en l’incrémentant (ptr++).
Quand cette boucle se termine, ptr pointe alors sur le terminateur nul \0 de dest. C'est donc ici que l'ajout des caractères de src va commencer.
Étape 2 : Copier jusqu'à n caractères de src dans dest
c
Copier le code
while (n > 0 && *src != '\0') {
    *ptr = *src;
    ptr++;
    src++;
    n--;
}
Objectif : Cette boucle while copie les caractères de src dans dest, un par un, en s’arrêtant après n caractères ou si elle atteint le \0 dans src.
Détail des lignes :
n > 0 && *src != '\0' : La boucle continue tant qu'il reste des caractères à copier (c'est-à-dire que n > 0) et qu’on n’a pas atteint la fin de src.
*ptr = *src; : On copie le caractère actuel de src à l’emplacement pointé par ptr dans dest.
ptr++ et src++ : On avance ptr et src pour copier le caractère suivant.
n-- : On décrémente n pour suivre le nombre de caractères restants à copier.
Résultat : À la fin de cette boucle, on aura copié jusqu'à n caractères de src à la fin de dest.
Étape 3 : Ajouter le terminateur nul à la fin de la nouvelle chaîne dest
c
Copier le code
*ptr = '\0';
Objectif : On ajoute un \0 à la fin de dest pour s'assurer que la chaîne résultante est bien terminée.
Pourquoi c'est important : En C, toutes les chaînes de caractères doivent se terminer par un \0 pour que les fonctions qui utilisent des chaînes puissent identifier leur fin.
Étape 4 : Retourner dest
c
Copier le code
return dest;
Objectif : La fonction retourne dest, la chaîne de destination maintenant modifiée pour inclure les caractères de src.
Pourquoi dest est retournée : Cela permet à l’appelant d’utiliser immédiatement la chaîne concaténée.*/