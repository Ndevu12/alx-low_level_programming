#include "lists.h"
#include <stdlib.h>
/**
 * free_list -  frees a list
 * @head: points to the first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free (head->next);
  		free (head);
		head = next;
	}
}

