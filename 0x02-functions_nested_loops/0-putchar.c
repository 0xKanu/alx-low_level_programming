#include "main.h"

/**
  * main - prints '_putchar', followed by a new line.
  *
  * Return: 0 if successful, non-zero if otherwise.
  */

int main(void)
{
	char func[8] = "_putchar";
	int c = 0;

	while (c < 8)
	{
	_putchar(func[c]);
	c++;
	}
	_putchar(10);
return (0);
}
