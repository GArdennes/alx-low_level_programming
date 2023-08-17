#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of a list
 * @head: dlistint_t head
 * Return: On success int
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (count);
	while (head != NULL)
	{
		count = head->n + count;
		head = head->next;
	}
	return (count);
}
