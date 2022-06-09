#include "main.h"

/**
  * 1-print_alphabet - prints the alphabet,
  * in lowercase, followed by a new line.
  *
  * Return: null
  *
  */


void print_alphabet(void)
	{
		int n;

		for (n = 97; n <= 122; n++)
			_putchar(n);

		_putchar(10);
	return;
	}
