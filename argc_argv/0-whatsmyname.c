#include <stdio.h>

/**
 * main : fuction
 *
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau contenant les arguments passés au programme
 *
 * Retourne : Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
(void)argc;/* Ignorer le paramètre argc */

printf("%s\n", argv[0]);/* Afficher le nom du programme */

return (0);/* Retourner 0 pour indiquer un succès */
}
