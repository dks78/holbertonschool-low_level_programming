#include "main.h"

/**
 * get_bit - Retourne la valeur du bit à un indice donné.
 * @n: Le nombre entier dont on veut récupérer le bit.
 * @index: L'indice du bit à récupérer.
 *
 * Return: La valeur du bit à l'indice `index`, ou -1 en cas d'erreur.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= 64)
        return (-1);

    return ((n >> index) & 1);
}
