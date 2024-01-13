#include "main.h"
/**
  * _strcmp - function that compares two strings
  * @s1: string arg 1 to be compared
  * @s2: string arg 2 to be compared
  *
  * Return: 0 if s1 and s2 are equal
  * - if @s1 is less than @s2
  * + if @s1 is greater than @s2
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
