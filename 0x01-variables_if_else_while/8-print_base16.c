#include <stdio.h>
/**
 * main - function that prints all the numbers of base 16 in lowercase
 * , followed by a new line.
 * Return: 0 if successful.
 */
int main(void)
{
	int num = '0';
	char hex_letter = 'a';

	while (num <= '9')
		{
		putchar(num);
		num++;
		}

	while (hex_letter <= 'f')
		{
		putchar(hex_letter);
		hex_letter++;
		}

	putchar(10);

return (0);
}
