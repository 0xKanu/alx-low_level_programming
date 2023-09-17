#include "main.h"
/**
  * print_alphabet_x10 - prints lowercase alphabets ten times
  *
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	count = 0;

	while (count < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		count++;
		_putchar('\n');
	}

}
