#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Exécute une fonction donnée surchaqueElémentD'unTableau.
 * @array: Le tableau d'entiers à traiter.
 * @size: La taille du tableau.
 * @action: Pointeur vers une fonction à utiliser sur chaque élément.
 *
 * Description: Cette fonction parcourt chaque élément du tableau donné
 * et applique la fonction pointée par @action à chaque élément.
 * Si le tableau ou la fonction est NULL, la fonction retourne immédiatement.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

