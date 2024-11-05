#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 
char *_strpbrk(char *s, char *accept);
char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++) { /*parcour la premiére chaine de charactére qui est S */
        for (j = 0; accept[j] != '\0'; j++) { /*parcour la dexiéme chaine de charactére*/
            if (s[i] == accept[j]) { /*affcihe les charactére qui son identique dans les 2 chaine , le h e n'apparait 
            pas dans la dexiéme chaine donc cela ne va pas etre prit en comtpe */
                return &s[i];
            }
        }
    }
    
    return NULL;
}
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}