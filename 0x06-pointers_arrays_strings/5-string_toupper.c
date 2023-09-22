#include "main.h"
/**
  * string_toupper - function to change all
  * lowercase letters to upper letters in a
  * string.
  * @s: string arg to be modified
  *
  *
  * Return: the resulting string
  */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
	}

	return (s);
}
