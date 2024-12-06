#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Récupère le nœud à uncertainindexd'une liste
 * @head: Pointeur vers le premier nœud de la liste doublement chaînée
 * @index: L'indice du nœud à récupérer, en commençant à 0
 *
 * Return: Pointeur vers le nœud
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
