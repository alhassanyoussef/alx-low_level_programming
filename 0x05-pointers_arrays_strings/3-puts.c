#include "main.h"

/**
 * _puts - it is print a string
 *
 * @str: pointer
 *
 * Return: (0)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
