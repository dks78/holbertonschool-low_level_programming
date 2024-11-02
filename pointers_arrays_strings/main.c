#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}

void print_array(int *a, int n) /* N = au nombre de case du tableau , *a est le pointeur du tableau a[] */
{
    int i;

    i = 0;
    while (i < n) /* la boucle continue tan que i es inférieur a n , n correspond au nombre de case du tableau , donc la boucle continura jusqua avoir parcourue chaque case */
    {
        if (i != 0) /* is i est différent de 0 affiche une virgule , effectivement 0 et le debut de la boucle donc aucune valeur sera afficher 
        i est un entier qui s'incrémente a chaque itinération du tableau , comme elle recomance 1 fois affiche une virgule 2 fois affiche une virgule , premiere lancer i = 1 donc affiche un tableau */
        {
            printf(", ");
        }
        printf("%d", a[i]); /*/*/
        i++;
    }
    printf("\n");
}