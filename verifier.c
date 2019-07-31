#include "holberton.h"
/**
 * get_function - funtion choose.
 * @c: pointer char type.
 * Return: 0.
 */
int (*get_function(char c))(va_list a)
{
	int j;
	strct prn[] = {
		{"c", printf_char},
		{"s", printf_str},
		{"%", printf_porc},
		{"d", printf_digit},
		{"i", printf_digit},
		{"r", printf_reversed},
		{NULL, NULL}
	};
	for (j = 0; prn[j].p_str != '\0'; j++)
	{
		if (prn[j].p_str[0] == c)
			return (prn[j].f);
	}
	return (NULL);
}
