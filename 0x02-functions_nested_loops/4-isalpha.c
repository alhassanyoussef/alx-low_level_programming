#include "main.h"

/**
 * Description: _isalpha  - check if the character is lowercase,
 *                    or uppercase letter
 *
 * @c: check input of function
 *
 * Return: 1 if c is a letter, lowercase or uppercase | Returns 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
