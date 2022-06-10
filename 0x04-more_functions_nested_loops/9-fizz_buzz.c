#include <stdio.h>
/**
  * main - print fizz in place of 3 buzz in place of 5 
  * ; fizzbuzz in place of 15.
  *
  * Return: 0 if successful; non-zero if otherwise.
  */
int main(void)
{
	int n = 1;

	while (n < 100)
	{
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d", n);
		n++;
	}
	printf("Buzz\n");
	return (0);
}
