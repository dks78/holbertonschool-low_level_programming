#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    if(nmemb == 0 || size == 0)
    {
        return NULL;
    }
    ptr = malloc(nmemb * size);
    if(ptr == NULL)
    {
        return NULL;
    }

    return ptr;
}

