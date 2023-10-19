#include <stdio.h>
#include "lists.h"
/**
 * print_list - This function print a list of data stored in a linked list
 * @h: Stand for Head - it help in printing a list from the head of the list
 * Return: the number of nodes Otherwise [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		len++;
		h = h->next;
	}
	return (len);
	printf("\n");
}
