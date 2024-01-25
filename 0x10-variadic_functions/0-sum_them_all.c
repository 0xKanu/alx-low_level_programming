#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its param
 * @n: int param
 *
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	int SUM = 0;
	unsigned int i;

	va_list ptN;

	va_start(ptN, n);


	i = 0;
	while (i < n)
	{
		SUM += va_arg(ptN, unsigned int);
		i++;
	}
	va_end(ptN);

	return (SUM);

}
