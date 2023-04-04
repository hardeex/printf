#include "main.h"
#include <stdarg.h>

/**
 *function_manager - function manager
 *@c: character to find
 *@arg: va_list type
 *Description: This function call other functions
 * when the character is found
 *Return: count of printed characters
 */

int function_manager(char c, va_list arg)
{
	int cont = 0;

	cont = _switch(c, arg);
	if (c == 'p')
		cont = print_ptr(arg);
	return (cont);
}
