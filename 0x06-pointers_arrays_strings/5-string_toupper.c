#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase.
 *
 * @n: string
 *
 * Return: (n)
 */

char *string_toupper(char *n)
{
	int len = strlen(n);
	int i;

	for (i = 0; i < len; i++)
	{
		n[i] = toupper(n[i]);
	}
		return (n);
}
