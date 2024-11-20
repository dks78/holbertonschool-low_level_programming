#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Returns the sum of a and b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Returns the division of a by b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the division.
 * If b is 0, the behavior is undefined.
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: division by zero\n");
        exit(100); /* Exit with error code 100 */
    }
    return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The remainder of the division.
 * If b is 0, the behavior is undefined.
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error: division by zero\n");
        exit(100); /* Exit with error code 100 */
    }
    return (a % b);
}
