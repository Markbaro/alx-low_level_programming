#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a  list.
 * @head: pointer to the head node of the list
 * @idx: index of the list where new code is to be added
 * @n: interger for new code
 * Return: address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *current;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	current = *head;
	for (count = 0; count < idx - 1 && current != NULL; count++)
		current = current->next;

	if (current == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->next = current->next;
	current->next = ptr;

	return (ptr);
}

