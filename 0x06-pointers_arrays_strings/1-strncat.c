#include "main.h"
/**
  * _strncat - concacatenates two strings
  * till a certain number of bytes
  * @dest : destination str arg
  * @src: source str arg
  * @n: certain number of bytes
  *
  * Return: pointer to the resulting string @dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
