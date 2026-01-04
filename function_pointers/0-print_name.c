#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: pointer to function taking char * and returning void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}

