#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insère à index donné dans  liste Dchaînée
 * @h: Double pointeur vers le premier nœud de la liste
 * @idx: Indice où le nœud doit être inséré (commence à 0)
 * @n: Valeur du nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current = *h;
unsigned int i = 0;

    /* Cas spécial : insertion au début */
if (idx == 0)
return (add_dnodeint(h, n));
    /* Parcourir la liste pour trouver la position d'insertion */
while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

    /* Si la position est invalide (indice hors de portée) */
if (current == NULL && i != idx - 1)
return (NULL);

    /* Cas spécial : insertion à la fin */
if (current != NULL && current->next == NULL && i == idx - 1)
return (add_dnodeint_end(h, n));

    /* Allocation du nouveau nœud */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

    /* Initialisation du nouveau nœud */
new_node->n = n;
new_node->next = current->next;
new_node->prev = current;

    /* Mise à jour des pointeurs pour insérer le nœud */
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;
return (new_node);
}
