#include "main.h"
#include <stdio.h>

/**
 * @s: check the code
 * print_rev: fonction
 * coch
 */
void rev_string(char *s);
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
 void rev_string(char *s)
 {
    int i;      
    for (i = 9; i >= 0; i--) 
        putchar(s[i]);
    printf("\n");
    
 }