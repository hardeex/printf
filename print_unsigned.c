#include "main.h"

/**
 * print_unsign - print_unsign
 *
 * @arg: va_list parameter
 * @base: base 10, 8, 16 etc..
 *
 * Description: print numbers without signed
 * Return: num of characters
 */

int print_unsign(va_list arg, int base)
{
	int cont = 0;
	unsigned int i;
	char *s;

	i = va_arg(arg, unsigned int);
	s = convert_to("0123456789ABCDEF", i, base);
	_puts(s);
	cont = _strlen(s);

	return (cont);

}
