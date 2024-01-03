#include "main.h"

/**
 * puts2 - prints every other char of a string
 * starting with the first char.
 * @str: function param
 *
 * Half the lies they tell about me aren't true.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
{
