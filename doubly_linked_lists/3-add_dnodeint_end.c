#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - Ajoute un nœud à la fin d'uliste doublementchaînée
 * @head: Pointeur vers le pointeur de la tête de la liste
 * @n: Données à insérer dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud ou NULL en cas d'échec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *element = malloc(sizeof(dlistint_t));
if (element == NULL)
{
fprintf(stderr, "Erreur sur l'allocation\n");
return (NULL);
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

dlistint_t *temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = element;
element->prev = temp;
}
return (element);
}

