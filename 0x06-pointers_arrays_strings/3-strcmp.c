#include "main.h"
/**
  * _strcmp - a function that compares two strings.
  * @s1: the first string to be compared.
  * @s2: the second string to be compared.
  *
  * Return: negative integer if s1 is less than s2, zero if s1 is equal to s2,
  * and a positive integer if s1 is greater than s2.
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == 0)
		return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
