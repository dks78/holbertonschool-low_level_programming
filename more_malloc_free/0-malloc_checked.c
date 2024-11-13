#include "main.h"
#include <stdlib.h>


void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b); /*Une simple allocation mémoire*/
    if (ptr == NULL) {
        exit(98);
    }
    return ptr;
}