#include "main.h"
/**
 * _islower - check if a char is lowercase
 * @c: is a char to be checked
 * Return: 1 if char is lowercase, otherwie 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
