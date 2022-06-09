#include "main.h"
/**
  * times_table - a function that prints the 9 times table, starting with 0.
  * no parameter.
  *
  * Return: null , void function.
  */
void times_table(void)
{
	int col, row, units, tens, n ;

	for(row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			n = col * row;
			units = n % 10;
			tens = (n - units) / 10;
			if (col > o)
			{
				_putchar(' ');
				(tens <= 0) ? _putchar(' ') : _putchar(tens + '0');
			}
			_putchar(units + '0');
			if (col < 9)
				_putchar(44);
		}
		col = 0;
		_putchar(10);
	}
}
		
