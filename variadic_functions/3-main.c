#include <stddef.h>        /* for NULL */
#include "variadic_functions.h"

/**
 * main - test print_all
 *
 * Return: 0
 */
int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	print_all("cfsi", 'A', 3.14, NULL, 42);
	print_all(NULL);
	return (0);
}

