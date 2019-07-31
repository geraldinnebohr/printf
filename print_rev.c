#include "holberton.h"
/**
 * printf_reversed - prints a string, in reverse.
 * @list: arguments.
 * Return: string.
 */
int printf_reversed(va_list list)
{
	int a;

	char *arg;

	arg = va_arg(list, char *);

	for (a = 0; arg[a] != '\0'; a++)
	{
	}
	a--;
	while (arg[a] != 0)
	{
		_putchar(arg[a]);
		a--;
	}
	return (0);
}
