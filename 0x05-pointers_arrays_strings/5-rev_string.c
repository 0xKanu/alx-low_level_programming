#include "main.h"
/**
  * rev_string - function that reverses a string.
  * @s: pointer of parameter.
  */
void rev_string(char *s)
{
	char tmp;
	int length = 0;
	int b = 0;
	int e;

	while (s[length] != '\0')
		length++;
	e = length - 1;
	length /= 2;
	while (length--)
	{
		tmp = s[b];
		s[b] = s[e];
		s[e] = tmp;
		b++;
		e--;
	}
}
