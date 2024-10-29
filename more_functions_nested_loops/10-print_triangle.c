#include "main.h"
 /**
 *
 * print_diagonal : Prints numbers from 0 to 9, excluding 2 and 4.
 * n: charactere
 * Return: Nothing (void)
 */
void print_triangle(int size){ 
    int i,j,k;
 if (size <= 0) {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++) {
        for (j = 0; j < size - i; j++) {
            _putchar(' ');
        }
        for (k = 0; k < i; k++) {
            _putchar('#');
        }
        _putchar('\n');
    }
 }