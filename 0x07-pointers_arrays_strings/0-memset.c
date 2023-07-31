#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: is a memory adress
 * @b: the value
 * @n: numbers of bytes for which to set this value
 *
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));

}
