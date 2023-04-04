#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: a pointer to the head of list
 * @index: index of the node starting at 0
 * Return: a pointer to the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
