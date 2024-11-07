#include <stdlib.h>
#include <stdio.h>
/**
 * main - Multiplie les nombres passés en arguments
 * @argc: Le nombre d'arguments
 * @argv: Le tableau contenant les arguments
 *
 * Retourne: 0 en cas de succès, 1 si le nombre d'arguments est incorrect
 */
int main(int argc, char *argv[])
{
        int i;
        int cpt = 1;
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    for (i = 1; i < argc; i++)
    {
        int c = atoi(argv[i]);
        cpt *= c;
    }

    printf("%d\n", cpt);
    return (0);
}