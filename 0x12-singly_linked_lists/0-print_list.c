#include "lists.h"
/**
 * print_list - prints a linked list
 * @h: pointer to firdt node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node != NULL)
	{
	printf("[%zu] %s\n", count++, node->str);
	node = node->next;
	}

	return (count);
}

