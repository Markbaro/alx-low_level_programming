#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: A pointer to the head of the list.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

