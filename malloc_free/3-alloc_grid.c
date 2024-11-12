#include "main.h"
#include <stdio.h>
#include <stdlib.h>




int **alloc_grid(int width, int height) {  
    int **grid;
    int i,j;

    if (width <= 0 || height <= 0) {
        return NULL;
    }

    grid = malloc(height * sizeof(int *));

    if (grid == NULL) {
        return NULL;
    }

    for (i = 0; i < height; i++) {
        grid[i] = malloc(width * sizeof(int));  /*Allocation pour chaque ligne*/ 
        if (grid[i] == NULL) {
            /*  Si l'allocation échoue pour une ligne, libérer les lignes précédentes */
            for ( j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);  /*Libérer la mémoire du tableau de pointeurs*/ 
            return NULL; 
        }
    }

    return grid; 
}
