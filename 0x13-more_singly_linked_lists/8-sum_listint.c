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
	listint_t *crnt_node;

	crnt_node = head;
	while (crnt_node != NULL)
	{
		count += crnt_node->n;
		crnt_node = crnt_node->next;
	}
	return (count);
}
