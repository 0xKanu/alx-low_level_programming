#include "main.h"
/**
  * more_numbers - prints 10 times the numbers from to 14.
  *
  * Return: null, void function.
  */
void more_numbers(void)
{
	int num = 48;
	int rep = 0;
	int reset = 0;

	while (rep < 10)
	{
		while (num <= 62)
		{
			if (n > 57)
			{
				reset = 10;
				_putchar(49);
			}
			_putchar(num - reset);
			num++;
		}
		num = 48;
		reset = 0;
		rep++;
		_putchar(10);
	}
}
