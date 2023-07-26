#include "main.h"

/**
 * _strncpy - makes copy for two strings
 *
 * @dest: string
 * @src: string
 * @n: max number can be copied
 *
 * Return: (dest)
 *
 */


char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);

	return (dest);

}
