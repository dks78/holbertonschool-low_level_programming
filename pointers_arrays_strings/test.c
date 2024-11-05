#include <stdio.h>

// void reverse_array(int *a , int n );

// int main (void)
// {
//     int  a[] = {1 , 1 , 5, 5 ,6 ,8 ,89 ,98 ,763 ,9525 ,63 };

//     int n = sizeof(a) / sizeof(a[0]);
//      reverse_array(a, n);
//     reverse_array(a, n);
// }

// void reverse_array(int *a , int n )
// {
//     int i = 0;
//     int temp;

//     while(i < n )
//     {
//         if(i != 0){
//             printf(" , ");
//         }
//         printf("%d", a[i]);
//            i++;
//     }
//     printf("\n");


//     for(i = 0; i < n / 2; i++)
//     {
//         temp = a[i];
//         a[i] = a[n -1 -i ];
//         a[n -1 - i] = temp;
//     }
// }

//     char dico[] = "boul et bill";
//     char mot[] = "bill";
    
//     if(strstr(dico , mot) != NULL)
//     {
//         printf("%s", mot);
//     }
//     printf("\n");
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     char mot[] = "Voici BILL dans une phrase";
//     char dico[] = "bill";                      
//     int found = 0;                    
//     int i, j;

//     for (i = 0; mot[i] != '\0'; i++) {
//         for (j = 0; dico[j] != '\0' && mot[i + j] == dico[j]; j++) {
//         }
//         if (dico[j] == '\0'){
//             found = 1;
//             break;
//         }
//     }
//     if (found) {
//         printf(" %s\n", dico);
//     }
//     return 0;
// }
