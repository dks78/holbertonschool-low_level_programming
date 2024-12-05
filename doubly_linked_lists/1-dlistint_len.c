#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Compte le nombre d'élément
 * @h: Pointeur vers le premier élément (tête) de la liste.
 *
 * Return: Le nombre total de nœuds dans la liste.
 */
size_t dlistint_len(const dlistint_t *h)
{
int size = 0;
while (h != NULL)
{
++size;
h = h->next;
}
return (size);
}

