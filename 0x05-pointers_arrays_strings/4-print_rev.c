#include "main.h"
/**
 * print-rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
