#include <stdio.h>   

/**
 * main - check the code
 *
 * Return: Always 0.
 */
/**
 * main - check the code
 *
 * Return: Always 0.
 */


int main() {
    int i;
    for (i = 0; i <= 9; i++) {
        
        if (i < 10) {
            putchar('0' + i); 
        }

        if (i < 10) {
            putchar(','); 
            putchar(' '); 
        }
    }
    putchar('$'); 
    putchar('\n');

    for (i = 0; i <= 18; i += 2) {

        if (i < 10) {
            putchar('0' + i);
        } else {
            putchar('1'); 
            putchar('0' + (i - 10)); 
        }

        if (i < 18) {
            putchar(','); 
            putchar(' '); 
        }
    }

    putchar('$'); 
    putchar('\n'); 
 
    for (i = 0; i <= 27; i += 3) {
        // Convertir le nombre en caractères
        if (i < 10) {
            putchar('0' + i); // Afficher le chiffre
        } else {
            putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 27) {
            putchar(','); // Affiche la virgule
            putchar(' '); // Affiche l'espace
        }
    }
        putchar('$'); 
        putchar('\n'); 
    for (i = 0; i <= 36; i += 4) {
        // Convertir le nombre en caractères
        if (i < 10) {
            putchar('0' + i); // Afficher le chiffre
        } else {
            putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 36) {
            putchar(','); // Affiche la virgule
            putchar(' '); // Affiche l'espace
        }
    }
    putchar('$'); 
    putchar('\n'); 
     for (i = 0; i <= 45; i += 5) {
        // Convertir le nombre en caractères
        if (i < 10) {
            putchar('0' + i); // Afficher le chiffre
        } else {
            putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 45) {
            putchar(','); // Affiche la virgule
            putchar(' '); // Affiche l'espace
        }
    }
    putchar('$'); 
    putchar('\n'); 
         for (i = 0; i <= 54; i += 6) {
        // Convertir le nombre en caractères
        if (i < 10) {
            putchar('0' + i); // Afficher le chiffre
        } else {
            putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 54) {
            putchar(','); // Affiche la virgule
            putchar(' '); // Affiche l'espace
        }
    }
    putchar('$'); 
    putchar('\n'); 

             for (i = 0; i <= 63; i += 7) {
        // Convertir le nombre en caractères
        if (i < 10) {
            putchar('0' + i); // Afficher le chiffre
        } else {
            putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 63) {
            putchar(','); // Affiche la virgule
            putchar(' '); // Affiche l'espace
        }
    }
    putchar('$'); 
    putchar('\n'); 
                 for (i = 0; i <= 72; i += 8) {
        // Convertir le nombre en caractères
        if (i < 10) {
            putchar('0' + i); // Afficher le chiffre
        } else {
            putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 72) {
            putchar(','); // Affiche la virgule
            putchar(' '); // Affiche l'espace
        }
    }
    putchar('$'); 
    putchar('\n'); 
        for (i = 0; i <= 81; i += 9) {
        // Convertir le nombre en caractères
        if (i < 10) {
            putchar('0' + i); // Afficher le chiffre
        } else {
            putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 81) {
            putchar(','); // Affiche la virgule
            putchar(' '); // Affiche l'espace
        }
    }
    putchar('$'); 
    putchar('\n'); 
    return 0; 
}
