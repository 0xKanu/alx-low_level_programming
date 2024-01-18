#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: int param
 * @c: char param
 *
 * Return: pointer if success; NULL if not
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int count;

	str = malloc(sizeof(char) * size);

	if (str == NULL || size == 0)
		return (NULL);

	for (count = 0; count < size; count++)
	{
		*(str + 1) = c;
	}

	return (str);
}
