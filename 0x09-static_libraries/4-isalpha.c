#include "main.h"
/**
  * _isalpha - checks for alphabetic character
  * @c: character arguement in integer format
  *
  * Return: 1 if c is lowercase and 0 if not
  */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
