#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print its name, followed by a newline
 * @argc: int pointer param
 * @argv: char array
 *
 * Return: void.
 */

int main(int argc, char **argv)
{
	while(argc--)
	{
		printf("%s\n", *argv++);
	}

	exit(EXIT_SUCCESS);

}

