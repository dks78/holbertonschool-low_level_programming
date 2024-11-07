#include <stdio.h>

/**
 * main => Affiche tous les arguments reçus ppour
 * @argc: Le nombre d'arguments
 * @argv: Le tableau des arguments
 *
 * Retourne : Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
    int count;
    printf("%s\n", argv[0]);
    if (argc > 1)
    {
    for (count = 1; count < argc; count++)
    {
        printf("%s\n", argv[count]);
    }
    }
return (0);
}

