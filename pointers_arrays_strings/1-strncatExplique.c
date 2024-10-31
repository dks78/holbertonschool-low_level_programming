
int main(void)
{ /* s1 :  est un tableau de caractères de taille 98, initialisé avec la chaîne "Hello ". Cette taille de 98 octets laisse beaucoup d’espace libre dans s1 pour y ajouter d’autres caractères.
    s2:   est un tableau de caractères, initialisé avec la chaîne "World!\n".
    ptr :  est un pointeur de type char * qui va recevoir le retour de la fonction _strncat.*/
    char s1[98] = "Hello "; 
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}


char *_strncat(char *dest, char *src, int n)
{

char *ptr = dest; /*  // On garde une copie de "dest" à travers "ptr"*/
    while (*ptr != '\0')
    {
        ptr++;    // On utilise ptr pour parcourir la chaîne dest jusqu'à la fin 
    }

    while (n > 0 && *src != '\0')
     // On copie ensuite src dans ptr (qui pointe toujours sur dest)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    *ptr = '\0';  // Terminer la chaîne

    return (dest); // Retourner l'adresse de départ ( nous avons utiliqer le pointeur ptr , ducoup l'adresse de dest n'a pas etait modifier )
}

/*DESTSEX ( char *ptr = dest : Pourquoi ? il y a plusieur raisons 

RAISON 1 PRESERVER L'ADRESSE INITIALE DU POINTEUR *DEST  : 
Si nous manipulions directement dest pour parcourir la chaîne, nous perdrions l'adresse de départ de dest, 
ce qui rendrait difficile de retourner la chaîne concaténée au début.
En créant ptr, nous avons un pointeur "temporaire" que nous pouvons déplacer librement sans changer dest lui-même.

RAISON 2: FACILITER LE RETOUR DE *DEST : 
A la fin de la fonction , nous voulons retourner un À la fin de la fonction, nous voulons retourner un pointeur vers le début de dest, et non vers une position avancée dans dest.
En manipulant ptr, nous gardons dest intact et pouvons le retourner directement comme résultat final.

RAISON 3 : EVITER LES MODIFICATIONS ACCIDENTELLES DE *DEST :
Si dest est modifié directement dans le code, sa valeur initiale est perdue, ce qui peut causer des erreurs dans le programme.
En utilisant ptr, nous avons un pointeur de travail qui nous permet de parcourir et manipuler dest sans en modifier l'adresse originale.












*/