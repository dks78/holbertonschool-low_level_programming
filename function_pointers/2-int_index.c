#include <stdio.h>
/**
 * int_index - search for an integer in an array using a comparison function.
 * @array: the array to search.
 * @size: the size of the array.
 * @cmp: the comparison function.
 *
 * Return: the index of the first element for which cmp does not return 0,
 * or -1 if no such element exists or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)

{
return (-1);
}
for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]) != 0)/*Si cmp retourne une valeur différente de 0*/
{
return (i);/*Retourner l'indice de l'élément trouvé */
}
}
return (-1);
}
