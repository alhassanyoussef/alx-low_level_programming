#include "main.h"

/**
 * reverse_array - makes reverse for array
 *
 * @a: array
 * @n: no of elements of array
 *
 * Return: ()
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
	int temp = a[i];

	a[i] = a[j];

	a[j] = temp;
	i++;
	j--;
	}
}
