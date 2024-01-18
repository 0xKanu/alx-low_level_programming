#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two nums,
 * followed by newline.
 * @argc: int pointer param
 * @argv: char array
 *
 * Return: 0 if successful, 1 if unsuccessful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);

}

