#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
   
    int size = 0;

        while (h != NULL)
        {
            ++size;
            h = h ->next;
        }

    return size;
}
