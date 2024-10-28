#include "main.h"
#include <stdio.h>
 /**
 *
 * print_diagonal : Prints numbers from 0 to 9, excluding 2 and 4.
 * n: charactere
 * Return: Nothing (void)
 */
void print_square(int size)
{
    int carre;
    int nombreCharac;

    if(size <= 0){
        _putchar('\n');
    } else {
        for(carre = 0 ; carre < size ; carre++){
            for(nombreCharac = 0; nombreCharac < size; nombreCharac++){
                _putchar('#'); 
            }
            _putchar('\n');
        }
    }
}