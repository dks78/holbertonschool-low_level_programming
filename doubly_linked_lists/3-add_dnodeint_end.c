#include <stdlib.h>
#include <stdio.h>
#include "lists.h"




dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *element = malloc(sizeof(dlistint_t));
    if (element == NULL)
    {
        fprintf(stderr, "Erreur sur l'allocation\n");
        return NULL;
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
    return element;
}
