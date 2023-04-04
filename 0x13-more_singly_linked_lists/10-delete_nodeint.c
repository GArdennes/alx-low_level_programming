#include "lists.h"

/**
 *delete_nodeint_at_index - Function to delete node at index
 *@head: head of linked list
 *@index: Number to check
 *Return: On success (1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int counter = 0;
listint_t *crnt_node = *head;
listint_t *prev_node = NULL;

if (*head == NULL)
	return (-1);

if (index == 0)
{
*head = (*head)->next;
free(crnt_node);
return (1);
}
while (crnt_node != NULL && counter != index)
{
prev_node = crnt_node;
crnt_node = crnt_node->next;
counter++;
}
if (crnt_node == NULL)
	return (-1);
prev_node->next = crnt_node->next;
free(crnt_node);
return (1);
}
