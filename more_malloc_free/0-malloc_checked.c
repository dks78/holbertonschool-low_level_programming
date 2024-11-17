#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire en utilisant malloc
 * @b: Taille de la mémoire à allouer en octets
 *
 * Return: Pointeur vers la mémoire allouée
 * Si l'allocation échoue, le programme termine avec un statut de 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b); /* Une simple allocation mémoire */
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
