#include <stdio.h>
/**
  * main - entry point of progrma
  *
  * Return: 0 if succesful
  */

int main(void)
{
	int num;

	num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
