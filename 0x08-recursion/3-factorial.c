#include "main.h"

/**
 * factorial - counts a facctorial for a given num
 *
 * @n: given num
 * Return: (0)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
