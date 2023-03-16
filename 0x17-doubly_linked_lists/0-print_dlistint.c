#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *n)
{
	size_t nodes = 0;

	if (!n)
		return (0);

	while (n)
	{
		printf("%d\n", h->n);
		n = n->next;
		nodes++;
	}

	return (nodes);
}
