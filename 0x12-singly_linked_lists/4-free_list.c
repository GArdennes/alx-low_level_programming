#include "lists.h"

/**
 * free_list - free a linked list
 * @head: first node
 */
void free_list(list_t *head)
{
	list_t *current, *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
