#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{

    int i;
    int cpt = 1;
    for (i = 1; i < argc; i++)
    {
        int c = atoi(argv[i]);
        cpt *= c;
    }

    printf("%d\n", cpt);
    return (0);
}