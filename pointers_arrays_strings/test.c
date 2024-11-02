#include <stdio.h>

void reverse_array(int *a , int n );

int main (void)
{
    int  a[] = {1 , 1 , 5, 5 ,6 ,8 ,89 ,98 ,763 ,9525 ,63 };

    int n = sizeof(a) / sizeof(a[0]);
     reverse_array(a, n);
    reverse_array(a, n);
}

void reverse_array(int *a , int n )
{
    int i = 0;
    int temp;

    while(i < n )
    {
        if(i != 0){
            printf(" , ");
        }
        printf("%d", a[i]);
           i++;
    }
    printf("\n");


    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n -1 -i ];
        a[n -1 - i] = temp;
    }
}
