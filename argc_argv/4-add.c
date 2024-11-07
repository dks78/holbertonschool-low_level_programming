#include <stdio.h>
#include <stdlib.h>
/**
 * main : Affiche le nombre d'arguments passés au programme
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau contenant les arguments passés au programme
 *
 * Retourne: Toujours 0 (indique que le programme s'est exécuté avec succès)
*/

int main(int argc, char *argv[])
{
    int i;
    int cpt = 1;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }

        int c = atoi(argv[i]);
        cpt += c;
    }

    printf("%d\n", cpt - 1);

    return (0);
}

