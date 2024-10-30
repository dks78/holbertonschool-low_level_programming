#include "main.h"
#include <stdio.h>

/**
 * @s: check the code
 * print_rev: fonction
 * coch
 */


 void rev_string(char *s)
 {

    int i;      
    
    for (i = 9; i >= 0; i--) 
        putchar(s[i]);
    printf("\n");

    s[0] = '\0'; /* effacce la chaine , donc le dexiemme prinf est */
 }