#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}#include "holberton.h"
/**
 * printf_char - funtion that print char.
 * @list: arguments.
 * Return: 0.
 */
int printf_char(va_list list)
{
	int arg = va_arg(list, int);

	_putchar(arg);
	return (1);
}
/**
 * printf_str - funtion that print str.
 * @list: arguments.
 * Return: 0.
 */
int printf_str(va_list list)
{
	int i;
	char *ptr = va_arg(list, char *);

	if (ptr == NULL)
		ptr = "(null)";
	else
		for (i = 0; ptr[i] != '\0'; i++)
			_putchar(ptr[i]);

	return (i);
}
/**
 * printf_porc - function that prints %
 * @list: arguments.
 * Return: 0.
 */
int printf_porc(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}
