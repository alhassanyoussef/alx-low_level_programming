#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * print - funcion that print
 * @name: name that printed
 */

void print(char *name)
{
	printf("%s\n", name);
}
