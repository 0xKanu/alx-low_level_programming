#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function prints the last digit of a number and
 * says if it is greater than 5 or less than 6 but not zero.
 * Return: 0 always if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	n = n % 10;

	printf("%d ", n);

	if (n > 5)
	printf("and is greater than 5\n");
	else if (n == 0)
	printf("and is 0\n");
	else if ((n < 6) != 0)
	printf("and is less than 6 and not 0\n");
	return (0);
}
