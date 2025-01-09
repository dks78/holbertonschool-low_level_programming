
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Supprime un nœud à un index donné dans une
 *                             doublement chaînée
 * @head: Pointeur vers le pointeur de la tête de la liste.
 * @index: Index du nœud à supprimer (commençant à 0).
 *
 * Return: 1 si la suppression a réussi, -1 en cas d'échec.
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
