#include "main.h"

/**
 * _strlen - gives the lenrth of string
 *
 * @s: pionter
 *
 * Return: (length)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
