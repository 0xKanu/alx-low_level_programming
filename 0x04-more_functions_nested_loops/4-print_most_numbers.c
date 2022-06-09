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
	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		_putchar(num);
	}
	_putchar(10);
return ;
}
