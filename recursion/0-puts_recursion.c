#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - affiche une chaîne de caractères + une nouvelle ligne
 * @s: pointeur vers la chaîne de caractères à afficher
 */
void _puts_recursion(char *s)

{

if (*s == '\0')

{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);

}