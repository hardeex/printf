#include "main.h"

/**
 * print_base16_upper_lower - print_base16_upper_lower
 *
 * @arg: va_list parameter
 * @representation: pointer parameter
 *
 * Description: This function takes 0123456789ABCDEF or 0123456789abcdef
 *		in representation parameter for print hexadecimal format
 * Return: num of characters
 */

int print_base16_upper_lower(va_list arg, char *representation)
{
	unsigned int i = 0, cont = 0;
	char *s;

	i = va_arg(arg, unsigned int);
	s = convert_to(representation, i, 16);
	_puts(s);
	cont = _strlen(s);
	return (cont);

}
