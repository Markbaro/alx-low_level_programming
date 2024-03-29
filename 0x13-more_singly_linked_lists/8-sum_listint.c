#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) in the linked list
 * @head: pointer to the head node of the list
 * Return: sum all data(n) or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
