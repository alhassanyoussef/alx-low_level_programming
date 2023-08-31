#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list_t list
 * @h: The head node of the list
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node != NULL)
	{
	count++;
	node = node->next;
	}

	return (count);
}

