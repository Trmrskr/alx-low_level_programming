#ifndef FUNC_POINTER_H
#define FUNC_POINTER_H
#include <stddef.h>

void _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNC_POINTER_H */
