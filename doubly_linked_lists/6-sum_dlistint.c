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
int sum_dlistint(dlistint_t *head)
{

 int somme = 0;

    /* Parcourir la liste et additionner les valeurs */
    while (head != NULL)
    {
        somme += head->n;  /* Ajouter la valeur du nœud courant */
        head = head->next; /* Passer au nœud suivant */
    }

    return (somme);  /* */
}

