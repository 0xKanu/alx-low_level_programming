#include <stdio.h>
/**
  * main - prints prints all single digit numbers of base 10 starting from 0
  *, followed by a new line.
  * Return: 0 if completed successfully.
  */
int main(void)
{
	char number = 48;
while (number <= 57)
{	putchar(number);
	number++;
}
putchar (10);
return (0);
}
