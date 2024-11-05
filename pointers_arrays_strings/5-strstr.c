
#include "main.h"
#include <stddef.h>
/**
 * _strstr - Localise une sous-chaîne dans une chaîne
 * @haystack: la chaîne principale dans laquelle chercher
 * @needle: la sous-chaîne à trouver d
 *
 * Description: Cette fo
 * needle dans la chaîne hay
 * Retourne un pointeur ver
 * si la sous-chaîne n'est pas trouvée.
 *
 * Return: pointeur vers le début de ne
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
{
}
if (needle[j] == '\0')
return (&haystack[i]);
}
}
return (NULL);
}
