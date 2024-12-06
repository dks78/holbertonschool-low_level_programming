#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Calcue la somme toutesles données d'une llement chaînée
 * @head: Pointeur vers le premier nœud de la liste
 *
 * Return: La somme des valeurs de tous les nœuds,
 */
int sum_dlistint(dlistint_t *head)
{
int somme = 0;

while (head != NULL)
{
somme += head->n;  /* Ajouter la valeur du nœud courant */
head = head->next; /* Passer au nœud suivant */
}
return (somme);
}

