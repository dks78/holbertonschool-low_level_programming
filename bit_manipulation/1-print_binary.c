#include <stdio.h>
#include "main.h"

/**
 * print_binary - Affiche la représentation binaire d'un nombre
 * @n: Nombre à convertir en binaire
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
