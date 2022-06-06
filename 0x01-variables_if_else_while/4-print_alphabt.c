#include <stdio.h>
/**
  * main - prints alphabets execpt 'q' & 'e'.
  * Return: 0 if successful.
  */
int main(void)
{
	char beta = 97;

	while (beta <= 122)
	{
		if ((beta != 101) && (beta != 113))
		{putchar(beta); }

	beta++;
	}

	putchar(10);

return (0);
}
