#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of args passed into it.
 * @argc: int pointer param
 * @argv: char array
 *
 * Return: void.
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}

