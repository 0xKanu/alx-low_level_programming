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

	letter_0 = 'a';
	letter_1 = 'A';

	while (letter_0 <= 'z')
	{
		putchar(letter_0);
		letter_0++;
	}

	while (letter_1 <= 'Z')
	{
		putchar(letter_1);
		letter_1;
	}

	putchar('\n');
	return (0);
}
