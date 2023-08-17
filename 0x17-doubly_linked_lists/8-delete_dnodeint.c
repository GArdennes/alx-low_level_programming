#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: dlistint_t head
 * @index: dlistint_t index
 * Return: On success int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	dlistint_t *previous_node = NULL;
	unsigned int i = 0;

	while (current_node != NULL && i < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}
	if (current_node == NULL)
	{
		return (-1);
	}
	if (previous_node == NULL)
		*head = current_node->next;
	else
		previous_node->next = current_node->next;

	if (current_node->next != NULL)
		current_node->next->prev = previous_node;
	free(current_node);
	return (1);
}
