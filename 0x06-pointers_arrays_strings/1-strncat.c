#include "main.h"
/**
  * _strncat - a function that concatenates n bytes from a string
  * to another string.
  * @dest: the destination string.
  * @src: the source string.
  * @n: the number of bytes of source string to be concatenated.
  *
  * Return: a pointer to the resulting destination string.
  */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (y < n && src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;
	return (dest);
}
