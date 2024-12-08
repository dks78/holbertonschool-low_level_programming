#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Convertit une chaîne binaire en un entier non signé.
 * @b: Pointeur vers une chaîne de caractères contenant '0' et '1'.
 *
 * Return: Le nombre entier converti, ou 0 si la chaîne est NULL
 *         ou contient des caractères non valides.
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << 63; /* Masque initial pour un entier 64 bits */
    int started = 0; /* Indicateur pour ignorer les zéros initiaux */

    while (mask > 0)
    {
        if (n & mask) /* Si le bit correspondant est 1 */
        {
            _putchar('1');
            started = 1;
        }
        else if (started) /* Si on a déjà rencontré un '1', afficher les zéros */
        {
            _putchar('0');
        }
        mask >>= 1; /* Décale le masque vers la droite */
    }

    if (!started) /* Si le nombre est 0 */
        _putchar('0');
}