#include "main.h"
/**
 * print_numbers - function that prints the numbers
 * from 0 to 9, followed by newline.
 *
 * Return: void.
 */

void print_numbers(void)
{
	int  x;

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
