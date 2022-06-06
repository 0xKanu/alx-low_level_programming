#include <stdio.h>

/**
  * main - this function prints the lowercase alphabets first then 
  * UPPERCASE letters.
  * Return: 0 always if successful.
  */
int main(void)
{
	char alpha = 65;
	char beta = 97;

while (beta <= 122)
{
putchar(beta);
beta ++;
}
while (alpha <= 90)
{
putchar(alpha);
alpha ++;
}
putchar(10);

return (0);
}

