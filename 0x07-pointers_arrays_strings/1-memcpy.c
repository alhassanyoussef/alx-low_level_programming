#include "main.h"
/**
 * *_memcpy - copies
 *
 * @dest: destination memory address
 * @src: is source memory address
 * @n: number of bytes to copy from that source memory address to the dest
 * memory address
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
