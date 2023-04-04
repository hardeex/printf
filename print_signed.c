#include "main.h"

/**
 * print_sign - print sign
 *
 * @arg: va_list parameter
 * @base: base 10, 8, 16, 2 etc..
 *
 * Description: print numbers and signed
 * Return: num of characters
 */

int print_sign(va_list arg, int base)
{
	int i = 0, cont = 0;
	char *s;

	i = va_arg(arg, int);
	if (i < 0)
	{
		i = -(i);
		_putchar('-');
		cont += 1;
	}
	s = convert_to("0123456789ABCDEF", i, base);
	_puts(s);
	cont += _strlen(s);
	return (cont);
}
