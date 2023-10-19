#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list
 * @str: String to be stored in the new node
 * Return: Pointer to the new head of the list
 */

list_t *add_node(list_t **head, const char *str)
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
