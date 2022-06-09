#include "main.h"

/**
  * main - prints '_putchar', followed by a new line.
  *
  * Return: 0 if successful, non-zero if otherwise.
  */

int main(void)
{
	char func[] = {'_','p','u','t','c','h','a','r',10};
	int c = 0 ;

	while (c < 9){
	_putchar(func[c]);
	c++;
	}
return (0);
}
