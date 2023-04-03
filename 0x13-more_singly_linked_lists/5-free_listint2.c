#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees a linked list and sets head to NULL
  * @head: a pointer to the list to be freed
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	if (head)
	{
		while (*head)
		{
			currentNode = (*head);
			*head = (*head)->next;
			free(currentNode);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
