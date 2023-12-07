#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a list
 * @h: head
 * Return: int
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	while(h)
	{
		printf("%i\n",h->n);
		i++;
		h = h->next;
	}

	return (i);
}
