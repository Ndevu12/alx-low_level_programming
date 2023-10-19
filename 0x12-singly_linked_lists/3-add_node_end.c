#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list
 * @str: String to be stored in the new node
 * Return: address of new element else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{

	/* Create a new node*/
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{

		/* Handle memory allocation error*/
		return (NULL);
	}

	/* Allocate memory for the string and copy the data*/

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{

		/* Handle memory allocation error*/
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	/*Adding node at the end*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *check = *head;

		while (check->next != NULL)
			check = check->next;

		check->next = new_node;
	}
	return (new_node);
}
