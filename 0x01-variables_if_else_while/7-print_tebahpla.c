#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 * Return: 0 if successful.
 */

int main(void)
{
	char beta = 'z';

	while ('a' <= beta)
	{
	putchar(beta);
	beta--;
	}

	putchar(10);
return (0);
}
