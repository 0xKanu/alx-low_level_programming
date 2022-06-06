#include <stdio.h>

/**
  *
  */

int main(void)
{
	int n = 48;
	
	while(n <= 57)
	{	
		putchar(n);
                
		if (n < 57)
		putchar(44);

		putchar(' ');

		n++;

	}

	putchar(10);
return (0);	
}

