#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: Type char
 */

int printf_digit(va_list list);
{
	int a;

	int arg = va_arg(list, int);

	for (a = 0; arg[a] != '\0'; a++)
	{

	}
	a--;
	while (arg[a] != 0)
	{
		_putchar(arg[a]);
		a--;
	}
	_putchar('\n');
}
