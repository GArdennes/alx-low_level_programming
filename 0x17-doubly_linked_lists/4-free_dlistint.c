#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: dlistint_t head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *next_node;

	while (node != NULL)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
}
