#include "main.h"
/**
 * _isdigit - checks for number
 * @c: integer arg
 * Return: 1 if c is number and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
