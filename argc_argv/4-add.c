#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    if(argc < 0)
    {
        printf("Error\n");
        return 1;
    }

    for (i = 1; i < argc; i++)
    {

        int c = atoi(argv[i]);
        cpt += c;

    }

    printf("%d\n", cpt - 1);

return (0);
}
