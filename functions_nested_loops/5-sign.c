#include "main.h"
/**
 *  Return: 1 if c is lowercase, 0 otherwise
 * _islower - checks if a character is lowercase
 *  @c: The character to be checked
*/
int print_sign(int n)
{
    if(n > 0)
    {
        _putchar('+');
        return(1);
    } else if(n == 0)
    {
        _putchar('0');
        return (0);
    } else if( n < 0)
    {
        _putchar('-');
        return(-1);
    }
    return 0;
}
