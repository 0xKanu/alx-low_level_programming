#include "main.h"
/**
  * reverse_array - a function that reverses the content of an array of integers.
  * @a: an array of integers.
  * @n: number of bytes chosen to reverse in the chosen string.
  *
  * Return: nothing.
  */
void reverse_array(int *a, int n)
{
	int x, y, tmp;

	y = n - 1;

	x = 0;

	while (x < n / 2)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y--] = tmp;
		x++;
	}
return ;
}
