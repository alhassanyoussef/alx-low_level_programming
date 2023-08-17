#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all the input numpers
 * @n: const unsigned integer
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;

		va_start(ptr, n);
	for (int i = 0; i < n; i++)
		sum += va_arg(ptr, const unsigned int);
		va_end(ptr);
	return (sum);
}
