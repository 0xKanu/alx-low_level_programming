#include "main.h"
/**
  * print_diagonal - function that draws a diagonal line on the termina/
  *
  * @n: parmameter of number for length of the diagonal;
  *
  * Return: void.
  */
void print_diagonal(int n)
{
	int x = 0;
	int i;

	if (n > 0)
	{
		while(x < n)
		{
			for (i = 0; i < x; i++)
				_putchar(32);
			_putchar(92);
			_putchar(10);
			x++;
		}
	}
	else
		_putchar(10);
return;
}
