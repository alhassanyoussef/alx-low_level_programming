#include "main.h"

/**
 * factorial - counts a facctorial for a given num
 *
 * @n: given num
 * Return: (0)
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}

		return (n * factorial(n - 1));

}
