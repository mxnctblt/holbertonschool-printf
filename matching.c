#include "main.h"
/**
 * printf_function - funtion choose.
 * @c: pointer char type
 * Return: 0.
 */
int (*printf_function(char c))(va_list list)
{
	int j;
	strct form[] = {
		{"c", printf_char},
		{"s", printf_str},
		{"%", printf_percent},
		{NULL, NULL}
	};
	for (j = 0; *form[j].p_str != '\0'; j++)
	{
		if (form[j].p_str[0] == c)
			return (form[j].f);
		else if (form[j].p_str[0] != c)
		{
			_putchar('%');
			_putchar(c);
			return (NULL);
		}
	}
	return (NULL);
}
