#include <stdio.h>
/**
  * main - entry point in program
  *
  * Return: 0 if successful
  */

int main(void)
{
	int letter;

	letter = 'z';

	while (letter >= 'a')
	{	putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
