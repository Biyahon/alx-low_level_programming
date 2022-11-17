#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: to print between strings
 * @n: how many args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *current;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		current = va_arg(args, char *);
		{
			printf("%s", current);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		else
		{
			printf("(nil)");
		}
		printf("\n");
		va_end(args);

	}


