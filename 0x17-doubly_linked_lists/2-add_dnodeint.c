#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning 
 * @n: data
 * @*head: new node
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	
	if (!temp)
	{
		return (NULL);
	}

	temp->n = n;
	temp->prev = NULL;
        temp->next = *head;
	
	if(*head)
		(*head)->prev = temp;
	*head = temp;
	
	return (*head);
}
