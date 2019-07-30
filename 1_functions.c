#include "holberton.h"
/**
 * printf_digit - funtion that prints a digit.
 * @list: arguments.
 * Return: 0.
 */
int printf_digit(va_list list)
{
	int arg = va_arg(list, int);
	int i;

	i = aux(arg);
	return (i);
}

/**
 * aux - auxiliar recursive function
 * @arg: is an integer
 * Return: index
 */
int aux(int arg)
{
	int i;

	i = 0;
	if (arg < 0)
	{
		i += _putchar('-');
		arg = -arg;
	}
	if (arg == 0)
	{
		i += _putchar('0');
	}

	if (arg / 10)
		i += aux(arg /  10);

	i += _putchar(arg % 10 + '0');
	return (i);
}
