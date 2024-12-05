#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Ajoute un  nœudaudébutd'une liste doublement chaînée.
 * @head: Double pointeur vers le premier nœud de la liste.
 * @n: La valeur à insérer dans le nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud, ou NULL si l'allocation échoue.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *element;


element = malloc(sizeof(*element));
if (element == NULL)
{
fprintf(stderr, "Erreur sur l'allocation\n");
exit(EXIT_FAILURE);
}


element->n = n;
element->next = NULL;
element->prev = NULL;


if (*head == NULL)
{
*head = element;
}
else
{
element->next = *head;
(*head)->prev = element;
*head = element;
}

return (*head);
}
