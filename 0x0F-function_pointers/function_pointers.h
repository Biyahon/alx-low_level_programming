#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_
#include <stdlib.h>

int _putchar(char *c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif