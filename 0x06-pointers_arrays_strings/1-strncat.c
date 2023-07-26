#include "main.h"

/**
 * _strncat - makes concatenate for two string with the max num of characters
 *
 * @dest: string
 * @src: string
 * @n: max number of characters that concatenated
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);

}


