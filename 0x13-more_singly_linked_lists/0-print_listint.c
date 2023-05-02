#include "lists.h"

/**
*print_listint - prints elements
*
*@h: list

*Return: nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}#include "lists.h"

/**
*print_listint - prints elements
*
*@h: list

*Return: nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
