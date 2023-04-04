#include "lists.h"

/**
 * sum_listint - Function to add data of each node
 * @head: Header node
 *
 * Return: On success result
 */
int sum_list(listint_t *head)
{
	int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
