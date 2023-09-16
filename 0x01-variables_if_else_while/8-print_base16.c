#include <stdio.h>
/**
  * main - entry point in program
  *
  * Return: 0 if successful
  */

int main(void)
{

	int letter_0;
	int letter_1;

	letter_0 = '0';
	letter_1 = 'a';

	while (letter_0 <= '9')
	{
		putchar(letter_0);
		letter_0++;
	}

	while (letter_1 <= 'f')
	{
		putchar(letter_1);
		letter_1++;
	}

	putchar('\n');
	return (0);
}
