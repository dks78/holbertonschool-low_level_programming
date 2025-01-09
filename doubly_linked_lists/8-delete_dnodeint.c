
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Insère un nœud à un index donné dans une liste doublement chaînée
 * @h: Pointeur vers le pointeur de la tête de la liste
 * @idx: Index où insérer le nouveau nœud (commençant à 0)
 * @n: La valeur à insérer dans le nœud
 *
 * Return: Le pointeur vers le nœud inséré, ou NULL en cas d'échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i = 0;

    if (!head || !(*head)) 
        return (-1);


    if (index == 0)
    {
        *head = current->next;
        if (*head)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    while (current && i < index)
    {
        current = current->next;
        i++;
    }


    if (!current)
        return (-1);

    if (current->prev)
        current->prev->next = current->next;
    
    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return (1);
}