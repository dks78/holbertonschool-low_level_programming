#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%u] %s\n", h->len, h->str);  /*Affiche la longueur et la chaîne*/ 
        h = h->next;  /*Passe au prochain nœud*/ 
        count++;  /*Compte les éléments*/ 
    }
    return count;
}