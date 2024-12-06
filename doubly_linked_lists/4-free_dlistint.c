#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - Libère une liste doublement chaînée
 * @head: Pointeur vers la tête de la liste
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t  *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
