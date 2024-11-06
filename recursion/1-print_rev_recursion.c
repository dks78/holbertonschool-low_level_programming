#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - affiche une chaîne de caractères à l'envers,
 *                        suivie d'une nouvelle ligne
 * @s: pointeur vers la chaîne de caractères à afficher à l'envers
 */
void _print_rev_recursion(char *s)

{

if (*s == '\0')
return;

_print_rev_recursion(s + 1);
_putchar(*s);

}
