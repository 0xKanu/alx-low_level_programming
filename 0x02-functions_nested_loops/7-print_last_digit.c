#include "main.h"
/**
  * print_last_digit - print the last digit number of n.
  * @n: given number character.
  *
  * Return: the last digit of given number n.
  */
int print_last_digit(int n)
{
	int unit = n % 10;

	if (unit < 0)
	{
		_putchar(-unit + '0');
		return (-unit);
	}
	else
	{
		_putchar(unit + '0');
		return (unit);
	}
}
