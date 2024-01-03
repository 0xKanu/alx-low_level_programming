#include "main.h"

/**
 * _puts - prints a string, followed by a newline
 * @str: function param
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
