#include "lists.h"
/**
 * print_list - prints all the elemensts of a list_t list
 * @h: pointer to node
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
