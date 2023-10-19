#include "lists.h"
/**
 * print_list - This function print a list of data stored in a linked list
 * @h: Stand for Head - it help in printing a list from the head of the list
 * Return: the number of nodes Otherwise [0] (nil)
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t len = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf"[%d] %s\n", ptr->len, ptr->str);

		len++;
		ptr = ptr->next;
	}
	return (len);
}
