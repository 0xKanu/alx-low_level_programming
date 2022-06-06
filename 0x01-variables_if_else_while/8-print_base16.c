#include <stdio.h>
/**
   * main - function
    *
     * Return: end program
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
