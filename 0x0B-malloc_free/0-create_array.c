#include "main.h"
<<<<<<< HEAD

/**
 * create_array - it is a function creats array
 * @size: unsigned integer
 * @c: char
=======
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creats array
 * @size: unsigned integer
 * @c: char in
>>>>>>> 1ca7c38b681d42c056157658de93e9632faa2d4c
 * Return: Null or array
 */
char *create_array(unsigned int size, char c)
{
<<<<<<< HEAD
        char *array;
        unsigned int i;

        if (size == 0)
        {
                return (NULL);
        }
        array = (char *)malloc(size * sizeof(char));

        if (array == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < size; ++i)
        {
                array[i] = c;
        }
        return (array);
=======
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; ++i)
	{
		array[i] = c;
	}
	return (array);
>>>>>>> 1ca7c38b681d42c056157658de93e9632faa2d4c
}
