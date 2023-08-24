#include "lists.h"
/**
 * print_list - prints a linked list
 * @h: pointer to firdt node
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	if (h == NULL)
	{
	printf("[0] (nil)\n");
	return (0);
	}

	printf("[");
	while (current != NULL)
	{
	printf("'%s'", current->str);
	count++;

	if (current->next != NULL)
	printf(", ");

	current = current->next;
	}
	printf("]\n");

	return (count);
}
