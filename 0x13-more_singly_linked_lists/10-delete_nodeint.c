#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *previous;

	previous = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1; i++)
		{
			if (previous == NULL)
				return (-1);
			previous = previous->next;
		}
	}

	if (previous == NULL || previous->next == NULL)
		return (-1);

	current = previous->next;

	if (index != 0)
	{
		previous->next = current->next;
		free(current);
	}
	else
	{
		*head = current->next;
		free(current);
	}

	return (1);
}

