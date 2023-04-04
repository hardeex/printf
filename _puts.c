#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 *_puts - print string
 *Description: print some string
 *
 *@str: pointer char
 *
 *Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
