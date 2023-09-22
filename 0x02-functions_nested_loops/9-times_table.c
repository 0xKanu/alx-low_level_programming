#include "main.h"
/**
  * times_table - function that prints the 9 times table,
  * starting with 0
  *
  * Return: void
  */

void times_table(void)
{
	int num1, num2, prod;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			prod = num1 * num2;

			if (prod == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod <= 9 && prod != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}

		}
			_putchar('\n');
	}
}
