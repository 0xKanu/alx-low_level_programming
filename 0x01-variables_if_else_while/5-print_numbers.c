#include <stdio.h>
/**
  * main - entry point of progrma
  *
  * Return: 0 if succesful
  */

int main(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
