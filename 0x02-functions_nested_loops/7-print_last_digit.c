#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @num: integer arguement as a given number
  *
  * Return: last value of num
  */

int print_last_digit(int num)
{
	int digit;

	if (num < 0)
	{
		digit = (-1 * (num % 10));
		_putchar ('0' + digit);
		return (digit);
	}
	else
	{
		digit = num % 10;
		_putchar ('0' + digit);
		return (digit);
	}
}
