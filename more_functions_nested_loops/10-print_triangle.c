#include "main.h"
 /**
 *
 * print_diagonal : Prints numbers from 0 to 9, excluding 2 and 4.
 * n: charactere
 * Return: Nothing (void)
 */

void print_triangle(int size)
{ 
    int NomberLineActuel,AjoutEspaceDroite,Charactere;
    if (size <= 0) 
    {
        _putchar('\n');
        return;
    }
    for (NomberLineActuel = 1; NomberLineActuel <= size; NomberLineActuel++) 
    {
        for (AjoutEspaceDroite = 0; AjoutEspaceDroite < size - NomberLineActuel; AjoutEspaceDroite++) 
        {
            _putchar(' ');
        } 
        for (Charactere = 0; Charactere < NomberLineActuel; Charactere++) 
        {
            _putchar('#');
        }
            _putchar('\n');
    }
 }