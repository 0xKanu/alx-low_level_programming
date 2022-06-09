#include "main.h"
/**
  * print_numbers - a function that prints the number 0 to 9.
  * 
  * no parameters needed.
  *
  * Return: null, void function.
  */
void print_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		_putchar(n++);
	}
	_putchar(10);
}
