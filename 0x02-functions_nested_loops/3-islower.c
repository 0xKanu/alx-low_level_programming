#include "main.h"
/**
  * _islower - checks for lowercase character
  * @c: character arguement in integer format
  *
  * Return: 1 if c is lowercase and 0 if not
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
