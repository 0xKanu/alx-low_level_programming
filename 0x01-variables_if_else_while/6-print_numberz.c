#include <stdio.h>
/**
  * main -  prints all single digit numbers of base 10 starting from 0
  * , followed by a new line.
  * Return: 0 if successful.
  */
int main(void)
{
	int number = 48;

	while (number <= 57)
	{
	putchar(number);
	number++;
	}

	putchar (10);
return (0);
}
