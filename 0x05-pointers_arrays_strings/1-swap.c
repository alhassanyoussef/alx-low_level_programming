#include "main.h"

/**
 * swap_int - swaps the values of two int
 *
 * @a: first int
 *
 * @b: second int
 *
 * return: (viod)
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
