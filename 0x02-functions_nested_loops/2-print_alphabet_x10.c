#include "main.h"
/**
  * print_alphabet_x10 - print the alphabet x 10
  */
void print_alphabet_x10(void)
	{
		int n;
		int times;

		for (times = 0; times <= 10; times++)
		{
		for (n = 97; n <= 122; n++)
			_putchar(n);
		}

		_putchar(10);
	return;
	}
