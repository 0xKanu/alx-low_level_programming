#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - a function that prints all natural numbers from n to 98
  * , followed by a new line.
  * @n - given parameter in use.
  *
  * Return - null, void function.
  */
void print_to_98(int n)
{
	int upper = 98;

	if (n > 98)
	{
		while ( n >= upper)
		{
			if (n != upper)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	else
	{
		while (n <= upper)
		{
			if (n != upper)
			{
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	_putchar(10);
}
