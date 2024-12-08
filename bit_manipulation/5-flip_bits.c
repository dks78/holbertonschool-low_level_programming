#include "main.h"

/**
 * flip_bits - Renvoie le nombre de bits qu'il faut inverser pour passer de n à m.
 * @n: Premier nombre.
 * @m: Deuxième nombre.
 *
 * Return: Le nombre de bits à inverser.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result = n ^ m;
    unsigned int count = 0;


    while (xor_result)
    {
        count += (xor_result & 1);
        xor_result >>= 1;           
    }

    return count;
}
