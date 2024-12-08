#include "main.h"

/**
 * clear_bit - Définit un bit à 0 à un indice donné.
 * @n: Pointeur vers le nombre dont le bit doit être modifié.
 * @index: L'indice du bit à définir à 0.
 *
 * Return: 1 si la mise à jour a réussi, -1 en cas d'erreur.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);
*n &= ~(1UL << index);
return (1);
}
