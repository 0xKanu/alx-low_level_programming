#include "main.h"
/**
  * print_alphabet - prints lowercase alphabets
  *
  *
  * Return: void
  */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	
	_putchar('\n');

	return;
}
