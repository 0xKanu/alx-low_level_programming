#include <stdio.h>
/**
  * main - entry point in program
  *
  * Return: 0 if successful
  */

int main(void)
{
	int num;

	num = '0';

	while (num < '9')
	{	putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('9');

	return (0);
}
