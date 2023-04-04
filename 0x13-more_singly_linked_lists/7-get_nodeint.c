#include "lists.h"

/**
 * get_nodeint_at_index - find index of node
 * @head: First node to check
 * @index: Index of linked list
 *
 * Return: On success index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current_node = head;

	while (current_node != NULL && count != index)
	{
		current_node = current_node->next;
		count++;
	}
	if (count == index)
		return (current_node);
	return (NULL);
}
