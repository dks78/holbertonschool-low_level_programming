#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print to variable
 *
 *
 * Return: 0 Always (Success)
 *
 *
*/
int main(void)
{
    int nombre;

    for (nombre = 0; nombre <= 9; nombre++)
    {
        putchar(nombre + '0');  
        if (nombre != 9)     
        {
            putchar(',');     
            putchar(' ');    
        }
    }
    putchar('\n'); 
    return (0);
}