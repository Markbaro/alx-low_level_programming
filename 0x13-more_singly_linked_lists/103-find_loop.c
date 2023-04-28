#include "lists.h"

/**
 * find_listint_loop - finds the loop
 * @head: linked list
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head;
	listint_t *two = head;

	if (!head)
		return (NULL);

	while (one && two && two->next)
	{
		two = two->next->next;
		one = one->next;
		if (two == one)
		{
			one = head;
			while (one != two)
			{
				one = one->next;
				two = two->next;
			}
			return (two);
		}
	}

	return (NULL);
}
