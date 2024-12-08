#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Convertit une chaîne binaire en un entier non signé.
 * @b: Pointeur vers une chaîne de caractères contenant '0' et '1'.
 *
 * Return: Le nombre entier converti, ou 0 si la chaîne est NULL
 *         ou contient des caractères non valides.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;

    if (b == NULL)
        return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        /* Décalage de résultat à gauche et ajout du bit actuel */
        result = (result << 1) | (b[i] - '0');
    }

    return (result);
}
