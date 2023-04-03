#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a newNode to the beginning of  list
  * @n: The value to add to the new node
  * @head: a pointer to a pointer to the head of the list
  * Return: The address of the newNode or NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	return (NULL);
}
