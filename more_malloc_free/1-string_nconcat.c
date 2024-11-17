#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatène deux chaînes de caractères
 * @s1: Première chaîne de caractères
 * @s2: Deuxième chaîne de caractères
 * @n: Nombre de caractères de s2 à concaténer à s1
 *
 * Return: Pointeur vers la nouvelle chaîne de caractères allouée
 * La fonction retourne NULL en cas d'échec
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int longeur = 0, longuer2 = 0, total_length, i, j;
char *result;

if (s1 != NULL)
{
while (s1[longeur] != '\0')
{
longeur++;
}
}
if (s2 != NULL)
{
while (s2[longuer2] != '\0')
{
longuer2++;
}
}
if (n >= longuer2)
{
n = longuer2;
}
total_length = longeur + n + 1;

result = malloc(total_length *sizeof(char));

if (result == NULL)
{
return (NULL);
}
for (i = 0; i < longeur; i++)
{
result[i] = s1[i];
}
for (j = 0; j < n; j++)
{
result[longeur + j] = s2[j];
}
result[longeur + j] = '\0';
return (result);
}
