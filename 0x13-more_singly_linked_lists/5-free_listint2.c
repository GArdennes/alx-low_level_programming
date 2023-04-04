#include "lists.h"

/**
 *free_listint2 - free nodes of memory
 *@head: header node to check
 */
void free_listint2(listint_t **head)
{
listint_t *crnt_node, nxt_node;

crnt_node = *head;
while (crnt_node != NULL)
{
	nxt_node = crnt_node->next;
	free(crnt_node);
	crnt_node = nxt_node;
}
head = NULL;
}
