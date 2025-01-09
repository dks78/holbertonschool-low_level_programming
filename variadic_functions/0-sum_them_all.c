#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Calcule la somme de tous ses paramètres.
 * @n: Nombre d'arguments passés à la fonction.
 *
 * Description: Cette fonction utilise une liste d'arguments
 * variables pour additionner tous les arguments de type int.
 * Si n est égal à 0, la fonction retourne 0.
 *
 * Return: La somme des arguments ou 0 si n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    int sum;
    va_list ptr; /*acceder a la liste d'arguments*/

    f (n == 0)
    {
    return (0);
    }

    va_start(ptr, n); /*Cette macro initialise la liste des arguments variables, en utilisant le dernier argument fixe.*/
    for (i = 0 ; i < n; i++)
    {
    sum += va_arg(ptr, int);
    }

    va_end(ptr);

    return (sum);
}
