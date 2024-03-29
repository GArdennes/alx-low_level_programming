#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: dlistint_t head
 * @index: dlistint_t index
 * Return: On success dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
