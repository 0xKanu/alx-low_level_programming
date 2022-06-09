#include "main.h"
/**
  * print_line - a function that draws a straight line in the terminal.
  *
  * @n:  parameter n defines the number of times the character '_' is printed.
  *
  * Return: null, void function datatype.
  */
void print_line(int n);
{
	char uscore = '_';
	int rep = 0;

	while (rep <= n)
	{
		_putchar(uscore + '0');
		rep++;
	}
return;
}

