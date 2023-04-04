#include "main.h"

/**
 * print_string - print string
 *
 * @arg: va_list parameter
 *
 * Description: print string
 * Return: num of characters
 */

int print_string(va_list arg)
{
	char *s;
	int cont = 0;

	s = va_arg(arg, char *);
	if (!s)
	{
		s = "(null)";
		_puts(s);

		return (_strlen(s));
	}
	_puts(s);
	cont = _strlen(s);
	return (cont);
}
