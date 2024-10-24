#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */

void times_table(void)
{
 int main() {
    int i;
    for (i = 0; i <= 9; i++) {
        
        if (i < 10) {
            _putchar('0' + i); 
        }

        if (i < 10) {
            _putchar(','); 
            _putchar(' '); 
        }
    }
    _putchar('$'); 
    _putchar('\n');

    for (i = 0; i <= 18; i += 2) {

        if (i < 10) {
            _putchar('0' + i);
        } else {
            _putchar('1'); 
            _putchar('0' + (i - 10)); 
        }

        if (i < 18) {
            _putchar(','); 
            _putchar(' '); 
        }
    }

    _putchar('$'); 
    _putchar('\n'); 
 
    for (i = 0; i <= 27; i += 3) {
        // Convertir le nombre en caractères
        if (i < 10) {
            _putchar('0' + i); // Afficher le chiffre
        } else {
            _putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            _putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 27) {
            _putchar(','); // Affiche la virgule
            _putchar(' '); // Affiche l'espace
        }
    }
        _putchar('$'); 
        _putchar('\n'); 
    for (i = 0; i <= 36; i += 4) {
        // Convertir le nombre en caractères
        if (i < 10) {
            _putchar('0' + i); // Afficher le chiffre
        } else {
            _putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            _putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 36) {
            _putchar(','); // Affiche la virgule
            _putchar(' '); // Affiche l'espace
        }
    }
    _putchar('$'); 
    _putchar('\n'); 
     for (i = 0; i <= 45; i += 5) {
        // Convertir le nombre en caractères
        if (i < 10) {
            _putchar('0' + i); // Afficher le chiffre
        } else {
            _putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            _putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 45) {
            _putchar(','); // Affiche la virgule
            _putchar(' '); // Affiche l'espace
        }
    }
    _putchar('$'); 
    _putchar('\n'); 
         for (i = 0; i <= 54; i += 6) {
        // Convertir le nombre en caractères
        if (i < 10) {
            _putchar('0' + i); // Afficher le chiffre
        } else {
            _putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            _putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 54) {
            _putchar(','); // Affiche la virgule
            _putchar(' '); // Affiche l'espace
        }
    }
    _putchar('$'); 
    _putchar('\n'); 

             for (i = 0; i <= 63; i += 7) {
        // Convertir le nombre en caractères
        if (i < 10) {
            _putchar('0' + i); // Afficher le chiffre
        } else {
            _putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            _putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 63) {
            _putchar(','); // Affiche la virgule
            _putchar(' '); // Affiche l'espace
        }
    }
    _putchar('$'); 
    _putchar('\n'); 
                 for (i = 0; i <= 72; i += 8) {
        // Convertir le nombre en caractères
        if (i < 10) {
            _putchar('0' + i); // Afficher le chiffre
        } else {
            _putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            _putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 72) {
            _putchar(','); // Affiche la virgule
            _putchar(' '); // Affiche l'espace
        }
    }
    _putchar('$'); 
    _putchar('\n'); 
        for (i = 0; i <= 81; i += 9) {
        // Convertir le nombre en caractères
        if (i < 10) {
            _putchar('0' + i); // Afficher le chiffre
        } else {
            _putchar('0' + (i / 10)); // Affiche le chiffre 1 pour les nombres de 10 à 19
            _putchar('0' + (i % 10)); // Affiche l'unité (0 à 7 pour 10-27)
        }

        if (i < 81) {
            _putchar(','); // Affiche la virgule
            _putchar(' '); // Affiche l'espace
        }
    }
    _putchar('$'); 
    _putchar('\n'); 
    return 0; 
}


}