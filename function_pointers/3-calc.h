#ifndef CALC_H
#define CALC_H

/**
 * struct op - Structure associant un opérateur à une fonction.
 * @op: L'opérateur sous forme de chaîne (e.g. "+", "-").
 * @f: Pointeur vers la fonction associée.
 */
typedef struct op {
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Prototypes des fonctions d'opération */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Prototype de la fonction get_op_func */
int (*get_op_func(char *s))(int, int);

#endif
