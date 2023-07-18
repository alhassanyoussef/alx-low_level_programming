#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @n: int in
 *
 * Return: n
 */
int print_last_digit(int n)
{
	int lastdigit;
	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		n = n % 10;

	_putchar(lastdigit + '0');
	return (lastdight);
}
