#include "lists.h"


/**
 * add_dnodeint_end -  adds a new node at the end
 * @n: data
 * @head: node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tp, *new;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;	
	tp = *head;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);

	}

	while(tp->next != NULL)
		tp  = tp->next;
	tp->next = new;
	new->prev = tp;
	return (*head);	
}
