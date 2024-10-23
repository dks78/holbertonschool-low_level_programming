#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int _islower(int c); // prototype islower

// Fonction principale pour tester _islower
int main(void) 
{
    char c = 'g'; 
    return (0);
}

// Implémentation de la fonction _islower
int _islower(int c)
{
    // Vérifie si c est dans la plage des lettres minuscules
    if (c >= 'a' && c <= 'z')
    {
        return 1; // C'est une lettre minuscule
    }
    else
    {
        return 0; // Ce n'est pas une lettre minuscule
    }

    putchar(c);

}