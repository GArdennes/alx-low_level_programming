#include "lists.h"

/**
 * dlistint_len - function that returns the nubmer of elements in a list
 * @h: dlistint_t node
 * Return: On success size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
