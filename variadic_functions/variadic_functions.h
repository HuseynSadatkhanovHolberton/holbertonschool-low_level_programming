#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - associates a format specifier with a print function
 * @c: format specifier character
 * @f: function pointer to printing function
 */
struct printer
{
	char c;
	void (*f)(va_list);
};

/* Task 0 */
int sum_them_all(const unsigned int n, ...);

/* Task 1 */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Task 2 */
void print_strings(const char *separator, const unsigned int n, ...);

/* Task 3 */
void print_all(const char * const format, ...);

int _putchar(char c);

#endif

