#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: dlistint_t node
 * Return: On success size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
