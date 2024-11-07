#include <stdio.h>
/**
 * main : Affiche le nombre d'arguments passés au programme
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau contenant les arguments passés au programme
 *
 * Retourne: Toujours 0 (indique que le programme s'est exécuté avec succès)
*/

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}
