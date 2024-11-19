#include <stdio.h>

 int int_index(int *array, int size, int (*cmp)(int))
 {
        int i;
    if(size <= 0 )
    {
        return -1;
    }

    for(i = 0 ; i < size ; i++)
    {
        if (cmp(array[i]) != 0)  /*Si cmp retourne une valeur différente de 0*/ 
        {
            return i;  /*Retourner l'indice de l'élément trouvé */
        }
    }
    return -1; 
 }
int cmp(int n)
{
    return (n == 5) ? 1 : 0;
}