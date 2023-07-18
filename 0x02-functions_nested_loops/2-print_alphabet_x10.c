#include "main"

/**
 * print_alphabet_x10 - utilizes _putchar to prints 10 times the alphabet,
 *                                              in lowercase
 */

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
		_putchar('\n');
	}

}
