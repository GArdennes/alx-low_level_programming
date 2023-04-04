#include "lists.h"

/**
 *pop_listint - removes the head node
 *@head: Head node
 *Return: On success 1
 */
int pop_listint(listint_t ***head)
{
listint_t *crnt_node;
int data = 0;

if (head == NULL)
	return (data);

crnt_node = **head;
**head = crnt_node->next;
data = crnt_node->n;
free(crnt_node);

return (data);
}
