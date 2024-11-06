#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int is_prime_number(int n) {
    if (n <= 1) {
        return 0;
    }
    return is_prime_helper(n, 2);
}
int is_prime_helper(int n, int i) {
    if (i * i > n) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    return is_prime_helper(n, i + 1);
}
