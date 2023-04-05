#include "lists.h"

/**
 * add_nodeint_end - adds new node to tail of list
 * @head: Header node to check
 * @n: Node to check
 * Return: On success address of node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *crnt_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	crnt_node = *head;
	while (crnt_node->next != NULL)
	{
		crnt_node = crnt_node->next;
	}
	crnt_node->next = new_node;

	return (*head);
}
