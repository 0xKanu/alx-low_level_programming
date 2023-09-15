#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point in program
 *
 * Return: 0 if succesful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	unsigned int unit;

	unit = n % 10;

	if (unit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, unit);
	else if (unit == 0)
		printf("Last digit of %d is %d and 0\n", n, unit);
	else if (unit < 6 && unit != 0)
		printf("Last digit of %d is %d and is less than 5 and not 0\n", n, unit);
	return (0);
}
