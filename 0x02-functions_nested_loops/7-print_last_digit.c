#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @n: int in
 *
 * Return: lastDigit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -1 * (n % 10);
	else
		x = n % 10;

	_putchar(x + '0');
	return (x);
}
