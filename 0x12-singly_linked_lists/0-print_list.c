#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to the list_t to be printed
 *Return: the number of nodes to be printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %d\n", h->len, h->len);
		h = h->next;
		s++;
	}
	return (s);
}
