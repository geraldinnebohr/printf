#include "holberton.h"
/**
 * _printf - funtion that print.
 * @format: const char type.
 * Return: Number of digits.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int cont = 0, i = -1;
	int (*z)(va_list);

	va_start(list, format);

	if (format != NULL)
	{
		i = 0;
		for (; format[cont] != '\0'; i++, cont++)
		{
			if (format[cont] != '%')
				_putchar(format[cont]);
			else if (format[cont] == '%' && format[cont + 1] == '\0')
			{
				return (-1);
			}
			else if (format[cont] == '%' && format[cont + 1] != '\0')
			{
				z = get_function(format[cont + 1]);
				if (z == NULL)
					_putchar(format[cont]);
				else
				{
					i = (i + z(list)) - 1;
					cont++;
				}
			}
		}
	}
	va_end(list);
	return (i);
}
