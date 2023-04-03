#include "lists.h"

/**
 * add_nodeint - adds new node as head node
 * @head: First node to check
 * @n: Next node to check
 * Return: On success address of head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *crnt_node;

	if (head == NULL)
		return (NULL);

	crnt_node = malloc(sizeof(listint_t));
	if (crnt_node == NULL)
		return (NULL);
	crnt_node->n = n;
	crnt_node->next = *head;

	*head = crnt_node;

	return (*head);
}

