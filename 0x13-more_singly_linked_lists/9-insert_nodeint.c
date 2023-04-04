#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a new node at a position
 *@head: Header node
 *@idx: index to check
 *@n: data node
 *Return: On success result
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *crnt_node, *new_node;
unsigned int i;

if (*head == NULL)
	return (NULL);

crnt_node = malloc(sizeof(listint_t));
if (crnt_node == NULL)
	return (NULL);

crnt_node->n = n;
if (idx == 0)
{
	crnt_node->next = *head;
	*head = crnt_node;
	return (crnt_node);
}
new_node = *head;
for (i = 0; i < idx - 1; i++)
{
	if (new_node == NULL || new_node->next == NULL)
	{
		free(crnt_node);
		return (NULL);
	}
	new_node = new_node->next;
}
crnt_node->next = new_node->next;
new_node->next = crnt_node;

return (crnt_node);
}
