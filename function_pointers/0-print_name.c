#include <stdio.h>
/**
 * print_name - Exécute une fonction donnée sur un nom.
 * @name: Le nom à utiliser comme argument de la fonction.
 * @f: Pointeur vers une fonction qui prend un argument de type char *.
 *
 * Description: Cette fonction appelle la fonction pointée par @f,
 * en lui passant @name comme argument. Cela permet d'exécuter une
 * opération  définie par la fonction passée sur la chaîne @name.
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}


