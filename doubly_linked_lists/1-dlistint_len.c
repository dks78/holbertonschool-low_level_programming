#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Imprime nles éléments d'une liste doublement chaînée
 * @h: Pointeur vers le premier élément de la liste.
 *
 * Return: Le nombre de nœuds imprimés.
 */
 size_t dlistint_len(const dlistint_t *h)
{

    int size = 0;
    while (h != NULL)
    {
        ++size;
        h= h->next;
    }
    
    return size;

}

    /*   int size = 0;
    while (h != NULL)
    {
        ++size;
        h= h->next;
    }*/