#include "lists.h"

/**
 * listint_len -print len of linked list
 * @h: Node to check
 * Return: On success number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current_node = h;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		count++;
	}
	return (count);
}
