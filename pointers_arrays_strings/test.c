#include <stdio.h>

int main(void)
{ 

    int nb = 15;
    int *pointer = &nb;

   printf("La valeur à laquelle pointer pointe est : %d\n", *pointer);  
}
