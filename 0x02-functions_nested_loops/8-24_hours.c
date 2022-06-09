#include "main.h"
/**
  * jack_bauer - function that prints every minute of the day of Jack Bauer
  * , starting from 00:00 to 23:59.
  * @void: no parameter.
  *
  * Return: nothing.
  */
void jack_bauer(void)
{
	int hour, h1, h2, min, m1, m2;

	for (hour = 0; hour < 24; ++hour)
	{
		h1 = hour / 10;
		h2 = hour % 10;

		for (min = 0; min < 60; ++min)
		{
			m1 = min / 10;
			m2 = min % 10;
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar(10);
		}
	}
}
