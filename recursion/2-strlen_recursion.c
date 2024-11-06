#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères
 *
 * Retourne: la longueur de la chaîne
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')

return (0);

return (1 + _strlen_recursion(s + 1));

}
