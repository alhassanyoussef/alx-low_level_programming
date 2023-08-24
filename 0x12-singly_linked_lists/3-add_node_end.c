#include "lists.h"
/**
 * add_node_end - This function adds a new node at the end of a list_t list.
 *
 * @head: A pointer to the head of the list.
 * @str: The string to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	if (*head == NULL)
	{
		return (add_node(head, str)); }

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL); }

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL); }
	new_node->next = NULL;

	list_t *node = *head;

	while (node->next != NULL)
	{
	node = node->next; }

	node->next = new_node;

	return (new_node);
}

