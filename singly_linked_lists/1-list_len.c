#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Compte le nombre d'éléments dans une liste chaînée list_t.
 * @h: Pointeur vers la tête de la liste list_t.
 *
 * Return: Le nombre de nœuds dans la liste.
 */
size_t list_len(const list_t *h)
{
size_t size = 0;

while (h != NULL)
{
++size;
h = h->next;
}

return (size);
}
