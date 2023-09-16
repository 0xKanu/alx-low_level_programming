#include <stdio.h>
/**
  * main - entry point in program
  *
  * Return: 0 if successful
  */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}

		letter++;
	}
	putchar('\n');

	return (0);
}
