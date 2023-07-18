#include "main.h"

/**
 * print_sign: function that prints the sign of a number
 *
 * @c: check input of function
 *
 * Return: return 1 if n is +, return 0 if n is 0
 *             return -1 if n is -
 *
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else (n < 0)
	{
		_putchar(45);
		return (-1);
	}

}
