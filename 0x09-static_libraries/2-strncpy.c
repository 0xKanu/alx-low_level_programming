#include "main.h"
/**
  * _strncpy - function that copies a string
  * till a certain number of bytes
  * @dest : destination str arg
  * @src: source str arg
  * @n: certain number of bytes
  *
  * Return: pointer to the resulting string
  */

char *_strncpy(char *dest, char *src, int n)
{

	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < 0)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}

