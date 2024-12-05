#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Imprime nles éléments d'une liste doublement chaînée
 * @h: Pointeur vers le premier élément de la liste.
 *
 * Return: Le nombre de nœuds imprimés.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
count++;
}
return (count);
}
