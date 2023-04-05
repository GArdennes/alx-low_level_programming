#include "lists.h"

/**
 * reverse_listint - Function to reverse linked list
 * @head: head node
 * Return: On success result
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	(*head)->next = previous;
	return (*head);
}
