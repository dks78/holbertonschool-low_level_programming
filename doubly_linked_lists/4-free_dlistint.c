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
 void free_dlistint(dlistint_t *head)
{
    dlistint_t  *temp;
    while(head != NULL)
    {
        temp = head;
        head = head ->next;
        free(temp);
    }

}