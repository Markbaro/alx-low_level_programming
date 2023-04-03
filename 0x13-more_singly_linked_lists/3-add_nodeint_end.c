#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds  new node to the end of a linked list
  * @head: a pointer to apointer to the head of the list
  * @n: The value to be stored in the new node
  * Return: The address of the endNode, or NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode, *temp;

	if (head)
	{
		endNode = malloc(sizeof(listint_t));
		if (endNode == NULL)
			return (NULL);

		endNode->n = n;
		endNode->next = NULL;

		if (*head == NULL)
		{
			*head = endNode;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = endNode;
			return (temp);
		}
	}

	return (NULL);
}
