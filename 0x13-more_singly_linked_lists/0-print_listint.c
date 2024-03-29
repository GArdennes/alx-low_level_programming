#include "lists.h"

/**
 * print_listint - prints the data in nodes of list
 * @h: Node to check
 * Return: On success number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node)
	{
		i++;
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
	return (i);
}
