#include <unistd.h>

void print_string(const char *str) {
    while (*str) {
        _putchar(*str++);
    }
}
