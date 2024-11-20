#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[]) {
    int a, b, result;
    int (*operation)(int, int);

    if (argc != 4) {
        printf("Usage: %s num1 operator num2\n", argv[0]);
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    operation = get_op_func(argv[2]);

    if (operation == NULL) {
        printf("Error: invalid operator\n");
        return 1;
    }

    result = operation(a, b);
    printf("%d\n", result);

    return 0;
}
