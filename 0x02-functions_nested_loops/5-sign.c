#include "main.h"
/**
  * print_sign - function that prints the sign of given parameter n.
  *@n: The given parameter to be evaluated.
  *
  * Return: 1, if positive . 0 if zero . -1 if negative .
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}	
}	

