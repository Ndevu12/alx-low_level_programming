#include "hash_tables.h" 


/**
 * *hash_table_creat - creates a hash table
 * @size: the size of the array
 * Return:  a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	head = (hash_table_t*) malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);

	head->size = size;
	head->array = (hash_table_t**) calloc(head->size, sizeof(hash_table_t));
	if (head->array == NULL)
	{
		free(head->array);
		return (NULL);
	}

	for (i = 0; i < head->size; i++)
		ht->array[i] = NULL;

	return (head);
}
