#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: counr arguments
 * @argv: arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%\n", argc - 1);

	return (0);
}
