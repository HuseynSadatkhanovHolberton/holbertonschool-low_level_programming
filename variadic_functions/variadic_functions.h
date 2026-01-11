#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - associates a format specifier with a print function
 * @c: format specifier character
 * @f: function pointer to a printing function
 */
typedef struct printer
{
	char c;
	void (*f)(va_list);
} printer_t;

/* Task 0 */
int sum_them_all(const unsigned int n, ...);

/* Task 1 */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Task 2 */
void print_strings(const char *separator, const unsigned int n, ...);

/* Task 3 */
void print_all(const char * const format, ...);

/* Helper functions for Task 3 */
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

/* _putchar function */
int _putchar(char c);

#endif /* VARIADIC_FUNCTIONS_H */

