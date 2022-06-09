#include "main.h"
/**
  * print_most_numbers - prints the numbers form 0 to 9 execpt 2 and 4.
  * 
  * no parameters given.
  *
  * Return: value is void.
  */
void print_most_numbers(void)
{
	int num;
	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		_putchar(num + '0');
	}
	_putchar(10);
return ;
}
